using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Mirror;

public class OnManager : MonoBehaviour
{
    [SerializeField]
    private Text PingText;

    // Start is called before the first frame update
    void Start()
    {
        PingText.text = "0";
    }

    // Update is called once per frame
    void Update()
    {
        PingText.text = PlayerStat.Value.ToString();
    }
}
