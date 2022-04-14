using System;
using System.IO;
using System.Linq;
using System.Collections.Generic;

namespace CSharp_Shell
{

    public class MenuAdmin 
    {
        public int menu()  
        {
        	Console.WriteLine("************** Menu ***************\n");
        	Console.WriteLine("1. Play Game");
        	Console.WriteLine("2. Game Rule");
        	Console.WriteLine("3. Exit\n");
        	
        	string mVal = Console.ReadLine();
        	Console.WriteLine("");
        	
        	int val = int.Parse(mVal);
        	
        	return val;
        }
    }
}