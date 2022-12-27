using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
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

    int temp = 0;

    private void Update()
    {
        myValue = PlayerStat.Value;
        isOpen = PlayerStat.isOpen;
       

        if (isLocalPlayer && Input.GetKeyDown("x"))
        {
            Debug.Log("Sending Hola to Server !");
            Hola();
        }

        if (isLocalPlayer && Input.GetKeyDown("z"))
        {
            Debug.Log("My Result : " + myValue);
            Debug.Log("Is Open : " + isOpen);
        }

        if (isClient && isLocalPlayer)
        {
            OpenSet(PlayerStat.isOpen);
            SceneA_On(PlayerStat.isSceneA);
            SceneB_On(PlayerStat.isSceneB);
        }
    }
    public int GetValue()
    {
        return value;
    }

    [Command]
    // Communicate between Client and Server
    private void Hola()
    {
        value++;
        Debug.Log("Received Hola from the client!");
        ReplyHola();
    }

    
    [Command]
    private void OpenSet(bool val)
    {
        isOpen = val;
    }

    [Command]
    private void SceneA_On(bool val)
    {
        isSceneA = val;
    }
    
    [Command]
    private void SceneB_On(bool val)
    {
        isSceneB = val;
    }
   
    [TargetRpc]
    private void ReplyHola()
    {
        Debug.Log("Received Hola from Client!");
    }

    [TargetRpc]
    private void ReplyOpenUi()
    {
        Debug.Log("Received Open UI");
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
        Debug.Log("SceneA Open");
    }

    private void onValueChanged(int oldValue, int newValue)
    {
        PlayerStat.Value = newValue;

        Debug.Log("New Value Detective :");
        Debug.Log("Old Value : " + oldValue);
        Debug.Log("New Value : " + myValue); 
    }
}
