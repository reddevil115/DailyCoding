using System;
using System.IO;
using System.Linq;
using System.Collections.Generic;
using System.Net

namespace CSharp_Shell
{

    public static class Program 
    {
        public static void Main() 
        {
           Console.Write("Write Your First Name: ");
           string f_name = Console.ReadLine();
           
           Console.Write("Write Your Last Name: ");
           string L_name = Console.ReadLine();
           
           Console.WriteLine("");
           
           Console.WriteLine("Your Name: " +f_name+" , "+ L_name+ "\n");
           
           Console.WriteLine("Hi, " + L_name + " !");
          
        }
    }
}