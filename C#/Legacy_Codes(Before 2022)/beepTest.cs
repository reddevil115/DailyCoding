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
        	int max = 5;
        	int beepLength = 500;
        	
        	for(int i = 0; i < max; i++ )
            {
            	Console.Beep(beepLength,5000);
            	beepLength += 100;
            	System.Threading.Thread.Sleep(3000);
            }
        }
    }
}