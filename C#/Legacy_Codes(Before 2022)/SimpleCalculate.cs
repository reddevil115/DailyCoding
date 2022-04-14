using System;
using System.IO;
using System.Linq;
using System.Collections.Generic;

namespace CSharp_Shell
{
	public class stat
	{
		private int val_1 = 0;
		private int val_2 = 0;
		
		public void setVal_1(int a)
		{
			val_1 = a;
		}
		
		public void setVal_2(int a)
		{
			val_2 = a;
		}
		
		public int plusVal()
		{
			int calVal = val_1 + val_2;
			
			return calVal;
		}
		
		public int minusVal()
		{
			int calVal = val_1 - val_2;
			
			return calVal;
		}
		
		public int multiple()
		{
			int calVal = val_1 * val_2;
			
			return calVal;
		}
		
		public int devide()
		{
			int calVal = val_1 / val_2;
			
			return calVal;
		}
	}

    public static class Program 
    {
        public static void Main() 
        {
           var result = 0;
           stat stat = new stat();
           
           Console.WriteLine("<Simple Calculator>");
           Console.WriteLine("");
           
           Console.Write("Input first val: ");
           string input_1 = Console.ReadLine();
           
           Console.Write("Type Calculate Type(+,-,×,÷): ");
           string type = Console.ReadLine();
          
           Console.Write("Input second val: ");
           string input_2 = Console.ReadLine();
          
           int takeVal_1 = int.Parse(input_1);
           int takeVal_2 = int.Parse(input_2);
           
           stat.setVal_1(takeVal_1);
           stat.setVal_2(takeVal_2);
           
           if(type == "+")
          {
          	result = stat.plusVal();
          }
          
          else if(type =="-")
          {
          	result = stat.minusVal();
          }
          
          else if(type == "×")
          {
          	result = stat.multiple();
          }
          
          else if(type =="÷")
          {
          	result = stat.devide();
          }
           
           Console.WriteLine("");
           Console.Write("Calculate Result: ");
           Console.WriteLine(result);
           
        }
    }
}