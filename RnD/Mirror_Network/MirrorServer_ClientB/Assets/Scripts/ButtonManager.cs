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
        PlayerStat.ResetValue();
        manager.StartClient();
    }

    public void BT_ServerOFF()
    {
        var manager = RoomManager.singleton;

        if (manager.mode == Mirror.NetworkManagerMode.ClientOnly && !PlayerStat.isFirst)
        {
            PlayerStat.ResetValue();
            manager.StopClient();
        }
    }

    public void BT_Ready()
    {
        PlayerStat.isReady = true;
    }
}
