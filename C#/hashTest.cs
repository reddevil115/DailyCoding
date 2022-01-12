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
           int i = 0;
           
           Console.Write("Type Any: ");
           string input = Console.ReadLine();
           Console.Write("\n");
           
           Console.Write("Type Max Value: ");
           string val = Console.ReadLine();
           Console.Write("\n");
           
           int max = int.Parse(val);
           
           for(i = 0; i < max; i++)
           {
           	   int no = i+1;
           	   int getHash = makeHash(input);
           	   string hashVal = getHash.ToString();
           	   
           	   input = hashVal;
           	   
           	   Console.WriteLine("No. " + no + " Try: " + input);
           }
        }
        
        // Function for hash
        private static int makeHash(string inputVal)
        {
        	int pushash = inputVal.GetHashCode();
        	
        	return pushash;
        }
    }
}