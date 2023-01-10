using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ButtonManager : MonoBehaviour
{
    [SerializeField]
    private Button StopScene_btn;

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

    public void BT_OpenUI(int type)
    {
        if(type == 0)
        {
            PlayerStat.isOpen = true;
        }

        else if(type == 1)
        {
            PlayerStat.isOpen = false;
        }
    }

    public void BT_OpenScene_A()
    {
        PlayerStat.isSceneA = true;

        StopScene_btn.gameObject.SetActive(true);
    }

    public void BT_OpenScene_B()
    {
        PlayerStat.isSceneB = true;

        StopScene_btn.gameObject.SetActive(true);
    }

    public void BT_StopScene()
    {
        if(PlayerStat.isSceneA)
        {
            PlayerStat.isSceneA = false;
        }

        else if(PlayerStat.isSceneB)
        {
            PlayerStat.isSceneB = false;
        }

        StopScene_btn.gameObject.SetActive(false);
    }

    public void BT_Ready()
    {
        PlayerStat.isReady = true;
    }
}
