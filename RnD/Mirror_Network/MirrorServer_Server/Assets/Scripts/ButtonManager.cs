using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ButtonManager : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void BT_ServerON()
    {
        var manager = RoomManager.singleton;
        manager.StartServer();
    }

    public void BT_ServerOFF()
    {
        var manager = RoomManager.singleton;
        PlayerStat.ResetValue();
        // PlayerStat.isPannelOpen = 0;

        if (manager.mode == Mirror.NetworkManagerMode.ServerOnly)
        {
            manager.StopServer();
        }
    }
}
