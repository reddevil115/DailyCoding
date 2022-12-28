using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
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

    [SerializeField]
    private GameObject Player;

    private int temp = 0;

    private void Start()
    {
        if(Player.activeSelf == true && isClient)
        {
            DontDestroyOnLoad(Player);
        }
    }

    private void Update()
    {
        myValue = PlayerStat.Value;
        PlayerStat.isOpen = isOpen;
        PlayerStat.isSceneA = isSceneA;
        PlayerStat.isSceneB = isSceneB;

        if (isLocalPlayer && Input.GetKeyDown("x"))
        {
            Debug.Log("Sending Hola to Server !");
            Hola();
        }

        if (isLocalPlayer && Input.GetKeyDown("z"))
        {
            Debug.Log("My Result : " + myValue);
            Debug.Log("Is Open : " + PlayerStat.isOpen);
            Debug.Log("Is Scene A : " + PlayerStat.isSceneA);
            Debug.Log("is Scene B : " + PlayerStat.isSceneB);
        }

        if(isClient && PlayerStat.isSceneA && temp < 1) 
        {
            /*
            var manager = NetworkManager.singleton;
            manager.ServerChangeScene("SceneA");
            */

            SceneManager.LoadScene("SceneA");

            temp = 1;
        }

        if (isLocalPlayer && PlayerStat.isSceneB && temp < 1)
        {
            //var manager = NetworkManager.singleton;
            //manager.ServerChangeScene("Scene B");

            SceneManager.LoadScene("Scene B");

            temp = 1;
        }

        if (isLocalPlayer && !PlayerStat.isSceneA && !PlayerStat.isSceneB && temp == 1)
        {
            // var manager = NetworkManager.singleton;
            //manager.ServerChangeScene("ServerON");

            SceneManager.LoadScene("ServerON");
            temp = 0;
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
    private void SetIsOpen(bool val)
    {
        this.isOpen = val;
    }

    
    //[ClientRpc] //Ùýð¹ïÃªÇª¹ª±ªÉÙýð¹ªòÝÂª«ªéªÊª¤¡£
    private void ChangeSceneA()
    {
        if (temp < 1)
        {
            /*
            NetworkManager manager = NetworkManager.singleton;
            manager.ServerChangeScene("SceneA");
            */

            SceneManager.LoadScene("SceneA");
        }

        temp = 1;¡¡¡¡¡¡¡¡
    }
    

    //[ClientRpc] //Ùýð¹ïÃªÇª¹ª±ªÉÙýð¹ªòÝÂª«ªéªÊª¤¡£
    private void ChangeSceneMain()
    {
        if (temp < 1)
        {
            //NetworkManager manager = NetworkManager.singleton;
            //manager.ServerChangeScene("SceneON");

        }

        temp = 1;
    }

    private void onValueChanged(int oldValue, int newValue)
    {
        PlayerStat.Value = newValue;

        Debug.Log("New Value Detective :");
        Debug.Log("Old Value : " + oldValue);
        Debug.Log("New Value : " + myValue);
    }
}
