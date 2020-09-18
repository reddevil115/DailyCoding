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
           Console.Write("Type max: ");
           string take = Console.ReadLine();
           int max = int.Parse(take);
           
           int i = 0;
           int result = 0;
           
           for(i = 0; i < max+1; i++)
           {
           	   result = result + i;
           }
           
           Console.WriteLine("Result: " + result);
        }
    }
}