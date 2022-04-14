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
        	String a;
        	String[] b;
        	
        	a = Console.ReadLine();
        	
        	b = a.Split(" ");
        	
        	a = null;
        	
        	for(int i = 0; i < b.Length; i++)
        	{
        		a += b[i];
        	}
        	
        	MessageBox.Show("Open Result?");
        	
        	Console.WriteLine(a);
        	Console.WriteLine(a.Length);
        }
    }
}