using System;
using System.IO;
using System.Linq;
using System.Collections.Generic;

namespace CSharp_Shell
{

    public static class Program 
    {
    	static GameLabel label = new GameLabel();
        static ThrowNumbers getNumbers = new ThrowNumbers();
           
        const int MAX = 5;
        static int numbers[] = new int[MAX];
        
        public static void Main() 
        {
           
           DialogResult gameStart = MessageBox.Show(
           " Press 'Yes' to start game."
           );
           
           if(gameStart == DialogResult.Yes)
           {
           	
           }
           
           else
           {
           	    Console.WriteLine("Game Canceled.");
           }
        }
        
        public void showNumbers()
        {
        	
        }
    }
}