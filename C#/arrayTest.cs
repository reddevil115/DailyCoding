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
           int [] a;
           
           a = new int[10];
           
           for(int i = 0; i < a.Length; i++)
           {
           	 a[i] = i + 1;
           }
           
           foreach(int b in a)
           {
           	   if(b == 10)
               {
              	  Console.WriteLine("Yes");
               }
               
           }
        }
    }
}