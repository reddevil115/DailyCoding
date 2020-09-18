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
           string a;
            
           Console.Write("Type Any: ");
           a = Console.ReadLine();
           Console.Write("\n");
           Console.WriteLine("You Typed: " + a);
           
           typeCheck(a);
           
           if(typecheck)
           {
              Console.WriteLine("Hello!");
           }
        }
        
        private bool typeCheck( string val )
        {
            if( val == "Hello")
            {
                return true;
            }
        
            else
            {
                return false;
            }
        
        }
        
    }
    
}