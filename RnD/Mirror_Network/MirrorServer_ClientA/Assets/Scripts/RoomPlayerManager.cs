using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Mirror;

public class RoomPlayerManager : NetworkRoomPlayer
{
    private void Update()
    {
        if (PlayerStat.isReady && isClient && hasAuthority)
        {
            playerReady();
        }
    }

    [Command]
    private void playerReady()
    {
        var players = FindObjectsOfType<RoomPlayerManager>();
        players[this.index].readyToBegin = true;
    }
}
