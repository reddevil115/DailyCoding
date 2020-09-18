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
           List<int> list = new List<int>();
           list.Add(2);
           list.Add(5);
           list.Add(3);
           
           Console.WriteLine("Before Sort");
           
           foreach(int a in list)
           {
           	  Console.WriteLine(a);
           }
           
           list.Sort((a,b) => (a > b) ? 1 : -1);
           
           Console.Write("\n");
           Console.WriteLine("After Sort");
           
           foreach(int a in list)
           {
           	  Console.WriteLine(a);
           }
        }
    }
}