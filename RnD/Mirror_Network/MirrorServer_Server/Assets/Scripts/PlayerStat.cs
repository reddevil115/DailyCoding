using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class PlayerStat 
{
    public static int Value { get; set; }
    public static bool isOpen { get; set; }

    public static bool isSecenA { get; set; }
    public static bool isSecenB { get; set; }

    public static void ResetValue()
    {
        Value = 0;
        isOpen = false;
        isSecenA = false;
        isSecenB = false;
    }
}
