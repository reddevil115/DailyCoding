using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using Mirror;

public class RoomManager : NetworkRoomManager
{
    public override void OnStartServer()
    {
        Debug.Log("Server Started!");
    }

    public override void OnStopServer()
    {
        Debug.Log("Server Stopped !");
        PlayerStat.ResetValue();
    }
}
