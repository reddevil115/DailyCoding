using System;
using System.IO;
using System.Linq;
using System.Collections.Generic;

namespace CSharp_Shell
{

    public static class Program 
    {
        public static void Main() 
        {
           const int winPoint = 3;
           const int drawPoint = 1;
           
           int leagueSize = 0;
           
           int lastTeamWin = 0;
           int lastTeamDraw = 0;
           
           int beforeLastTeamWin = 0;
           int beforeLastTeamDraw = 0;
           
           string[] val = new string[2];
           
           Console.Write("Type League Size: ");
           val[0] = Console.ReadLine();
           
           leagueSize = convertInt(val[0]);
           val[0] = null;
           
        }
        
        static int convertInt(string stringValue)
        {
        	int intValue = 0;
        	
        	intValue = int.Parse(stringValue);
        	return intValue;
        }
    }
}