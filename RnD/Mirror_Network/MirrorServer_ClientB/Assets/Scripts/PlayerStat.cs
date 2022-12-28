using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class PlayerStat 
{
    public static int Value { get; set; }
    public static bool isOpen { get; set; }

    public static bool isSceneA { get; set; }
    public static bool isSceneB { get; set; }

    public static bool isReady { get; set; }

    public static bool isFirst { get; set; }

    public static void ResetValue()
    {
        Value = 0;
        isOpen = false;
        isSceneA = false;
        isSceneB = false;
        isReady = false;
        isFirst = false;
    }
}
