//+src=menu.cs
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
           menu menu = new menu();
           
           int menuCost = 0;
           int numbering = 1;
           bool ordering = true;
           
           Console.WriteLine("<Ordering System>\n");
           
           Console.WriteLine("***Type 'end' , when you finish order.***\n");
           
          Console.WriteLine("1.pizza: 10000");
    	  Console.WriteLine("2.pasta: 5000");
    	  Console.WriteLine("3.burgur: 4000");
    	  Console.WriteLine("4.soda: 1000\n");
          
          Console.WriteLine("Ordering...\n");
          
           while(ordering)
           {
           	 Console.Write("#"+numbering+" Menu "+"What would you order? : ");
           	 string takeOrder = Console.ReadLine();
           	 
           	 menuCost = menuCost + menu.menuVal(takeOrder);
           	 
           	 numbering += 1;
           	 
           	 if(takeOrder == "end")
           	 {
           	 	ordering = false;
           	 	
           	 	Console.WriteLine("\n");
           	 	Console.WriteLine("Ordering Finish...\n");
           	 }
           }
           
           Console.Write("Total Cost: ");
           Console.WriteLine(menuCost);
        }
    }
}