using System;
using System.IO;
using System.Linq;
using System.Collections.Generic;

namespace CSharp_Shell
{

    public static class Program 
    {
        static int max;
        
        public static void Main() 
        {
            String A;
            
            bool i = true;
            
            while(i)
           {
               Console.WriteLine("Type Your Name");
               A = Console.ReadLine();
          
               Console.WriteLine("Nice To Meet You!\n\n "+A);
               max++;
               
               if(max==5)
               {
                   i = false;
               }
           }
        }
    }
}