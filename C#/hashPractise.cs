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
           Console.Write("Type any: ");
           string a = Console.ReadLine();
           Console.WriteLine("");
           
           int ha = a.GetHashCode();
           
           Console.WriteLine("Before: " + a + "\n" + "Hash: " + ha +"\n");
           
           Console.Write("Re- type: ");
          string b =  Console.ReadLine();
          
          Console.WriteLine("");
          
          int hb = b.GetHashCode();
          
          Console.Write("Hash agreement: ");
          
          if(ha == hb)
          {
          	Console.WriteLine("Equal");
          }
          
          else
          {
          	Console.WriteLine("Different");
          }
          
          Console.WriteLine("Hash: " + hb);
        }
    }
}