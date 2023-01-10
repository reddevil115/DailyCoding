using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Mirror;

public class RoomManager : NetworkRoomManager
{
    public override void OnClientConnect()
    {
        base.OnClientConnect();
        Debug.Log("Successfully Connect to Server");
    }

    public override void OnClientDisconnect()
    {
        base.OnClientDisconnect();
        PlayerStat.ResetValue();
        Debug.Log("Disconnected from Server");
    }
}
