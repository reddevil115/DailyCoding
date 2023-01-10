using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Mirror;

public class PlayerManager : NetworkBehaviour
{
    [SyncVar(hook = nameof(onValueChanged))]
    int value = 0;
    int myValue = 0;

    [SyncVar]
    private bool isOpen = false;

    [SyncVar]
    private bool isSceneA = false;
    
    [SyncVar]
    private bool isSceneB = false;

    private int temp = 0;

    private void Start()
    {
        if(isServer)
        {
            SetOpen(isOpen);
        }
    }

    private void Update()
    {
        value = PlayerStat.Value;
        isOpen = PlayerStat.isOpen;
        isSceneA = PlayerStat.isSecenA;
        isSceneB = PlayerStat.isSecenB;

        if (isServer && Input.GetKeyDown("x"))
        {
            Message();
            UpdateValue();
        }

        if(isServer && Input.GetKeyDown(KeyCode.Z))
        {
            Debug.Log("Server's isOpen : " + isOpen);
            Debug.Log("Scene A Open : " + isSceneA);
            Debug.Log("Scene B Open : " + isSceneB);
        }

        /*
        if(isServer && PlayerStat.isSecenA)
        {
            if (temp < 1)
            {
                //ChangeSceneA();
            }
        }
        */
    }

    public override void OnStartServer()
    {
        Debug.Log("Here is Game Room Scene, Player add Successfully");
    }

    [Command] 
    // Communicate between Client and Server
    private void Hola()
    {
        value++;

        PlayerStat.Value = value;

        Debug.Log("Received Hola from the client!");
        Debug.Log("Server Value : " + value);

        ReplyHola();
    }

    [Command]
    private void OpenSet(bool val)
    {
        PlayerStat.isOpen = val;
        SetOpen(val);
    }

    [Command]
    private void SceneA_On(bool val)
    {
        PlayerStat.isSecenA = val;
        isSceneA = val;
        temp = 1;
    }

    [Command]
    private void SceneB_On(bool val)
    {
        PlayerStat.isSecenB = val;
        isSceneB = val;
    }

    [TargetRpc]
    private void ReplyHola()
    {
        Debug.Log("Received Hola from Client!");
    }

    [ClientRpc]
    private void Message()
    {
        Debug.Log("Ping...");
    }

    [ClientRpc]
    private void UpdateValue()
    {
        value++;
    }

    [ClientRpc]
    private void SetOpen(bool val)
    {
        this.isOpen = val;
    }
    
    //[ClientRpc]
    private void ChangeSceneA()
    {
        //NetworkManager manager = NetworkManager.singleton;
        //manager.ServerChangeScene("Scene A");
    }

    private void onValueChanged(int oldValue, int newValue)
    {
        /*
        Debug.Log("New Value Detective :");
        Debug.Log("Old Value : " + oldValue);
        Debug.Log("New Value : " + newValue);
        */

        Debug.Log("Dectective");
        
    }
}
