using System;
using System.IO;
using System.Linq;
using System.Collections.Generic;

namespace CSharp_Shell
{

    public static class Program 
    {
           
        private static int gold = 0;
        private static int price = 0;
        private static int lastPrice = 0;
        private static int rate = 0;
        private static int stock = 0;
    	
        public static void Main() 
        {
           
           title();
           
           Console.WriteLine("•Your Cash: " + gold);
           Console.WriteLine("•Your Stock: " + stock);
        }
        
        private static void title()
        {
        	Console.WriteLine("< Stock Game >\n");
        }
    }
}