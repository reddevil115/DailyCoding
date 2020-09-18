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
           bool canStart = false;
           
           canStart = Message("Start?");
           
           if(canStart)
           {
           	   Console.WriteLine("Start");
           }
           
           else
           {
           	   Console.WriteLine("Canceled");
           }
           
           clear(3000);
        }
        
        public static bool Message(String text)
        {
        	DialogResult result = MessageBox.Show(text);
        	
        	if(result == DialogResult.Yes)
        	{
        		return true;
        	}
        	
        	else
        	{
        		return false;
        	}
        }
        
        public static void clear(int time)
        {
        	System.Threading.Thread.Sleep(time);
           
            Console.Clear();
        }
    }
}