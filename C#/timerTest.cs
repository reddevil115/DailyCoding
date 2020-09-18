using System;
using System.IO;
using System.Linq;
using System.Collections.Generic;
using System.Threading;

namespace CSharp_Shell
{

    public static class Program 
    {
        public static void Main() 
        {
           int timerMin = 0;
           int timerSec = 0;
           
           bool setTimer = true;
           
           Console.WriteLine("< Simple Timer >\n");
           
           Console.WriteLine("Type minutes: ");
           string minSet = Console.ReadLine();
           Console.WriteLine("Type second: ");
           string secSet = Console.ReadLine();
           Console.WriteLine("");
           
           timerMin = int.Parse(minSet);
           timerSec = int.Parse(secSet);
           
           while(setTimer)
           {
           	 Console.Write(timerMin + " min " +timerSec+ " sec" + "\n");
           	 
           	 Thread.Sleep(1000);
 
             if(timerSec == 0 && timerMin > 0)
           	 {
           	 	timerMin = timerMin - 1;
           	 	timerSec = 60;
           	 }
           	 
           	 timerSec = timerSec - 1;
           	 
           	 if(timerMin == 0 && timerSec == 0)
           	 {
           	 	Console.WriteLine(timerMin + " min " +timerSec +" sec"+"\n");
           	 
           	 	setTimer = false;
           	 }
           }
           
           if(setTimer == false)
           {
           	   Console.WriteLine("Time is done!\n");
           }
        }
    }
}