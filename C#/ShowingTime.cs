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
        	DateTime now;
        	now = DateTime.Now;
        	
        	Console.WriteLine(now);
        	Console.WriteLine(now.ToLongDateString());
        }
    }
}