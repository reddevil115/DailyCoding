using System;
using System.IO;
using System.Linq;
using System.Collections.Generic;

namespace CSharp_Shell
{

    public class GameRule 
    {
        public void ruleInfor()
        {
        	Console.WriteLine("****** How to Play This Game ******\n");
        	
        	Console.WriteLine("I. Serve\n");
            Console.Write("You can only declare UP, DOWN or STAY at your serve game, ");
            Console.Write("It will be represent and decide number Increase, Decrease or Same Value of last serve time.\n\n"); 

            Console.WriteLine("However, if delared 1 or 9 by you or other you can not say UP or DOWN serve. Only STAY serve available.");
        }
    }
}