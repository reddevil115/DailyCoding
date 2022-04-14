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
           int a = 30;
           object b = (object)a;
           int c = (int)b;
           
           Console.WriteLine(a);
           Console.WriteLine(b);
           Console.WriteLine(c);
        }
    }
}