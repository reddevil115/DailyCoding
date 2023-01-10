using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class OnManager : MonoBehaviour
{
    [SerializeField]
    private Text PingText;

    [SerializeField]
    private GameObject TestPannelUI;

    // Start is called before the first frame update
    void Start()
    {
        PingText.text = "0";
    }

    // Update is called once per frame
    void Update()
    {
        PingText.text = PlayerStat.Value.ToString();

        SetTestPannelUI();
    }

    private void SetTestPannelUI()
    {
        if(PlayerStat.isOpen)
        {
            TestPannelUI.SetActive(true);
        }

        else if (!PlayerStat.isOpen)
        {
            TestPannelUI.SetActive(false);
        }
    }
}
