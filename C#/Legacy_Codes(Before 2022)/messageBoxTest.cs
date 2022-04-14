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
        	int Hp = 1000;
        	int Power = 500;
        	DialogResult result = MessageBox.Show("Attack? \n" + "Enemy Power: " + 
        	Hp + "\n" + "Your Army: " + Power);
        	
        	if(result == DialogResult.Yes)
        	{
        		Hp -= Power;
        		Console.WriteLine("Your army destroyed by enemy.");
        		Console.WriteLine("Enemy Hp Left: " + Hp);
        	}
        	
        	else if(result == DialogResult.Cancel)
        	{
        		Console.WriteLine("Attack Canceled");
        	}
        	
        	else
        	{
        		Console.WriteLine("Attack Canceled");
        	}
        	
        	System.Threading.Thread.Sleep(3000);
        	Console.Clear();
        }
    }
}