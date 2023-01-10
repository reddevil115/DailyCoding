using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Mirror;

public class RoomPlayerManager : NetworkRoomPlayer
{
    private void Update()
    {
        if(isServer)
        {
            
        }
    }

    [Command]
    private void playerReady()
    {
        var players = FindObjectsOfType<RoomPlayerManager>();
        players[this.index].readyToBegin = true;

        Debug.Log("player [" + this.index + "] :" + players[index].readyToBegin);
        Debug.Log("Player Length : " + players.Length);

        var manager = NetworkManager.singleton as NetworkRoomManager;

        if(players.Length > 1)
        {
            for (int i = 0; i < players.Length - 1; i++)
            {
                if (players[i].readyToBegin == false)
                {
                    break;
                }

                else if (players[players.Length - 1].readyToBegin && players.Length > 1)
                {
                    manager.CheckReadyToBegin();
                }
            }
        }
    }
}
