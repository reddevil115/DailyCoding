using System;
using System.IO;
using System.Linq;
using System.Collections.Generic;

namespace CSharp_Shell
{
	class infor
	{
		public int a = 30;
		private int key = 1111;
		
		public int setCode()
		{
			int c = key;
			
			return c;
		}
		
	}

    public static class Program 
    {
        public static void Main() 
        {
           infor test = new infor();
           
           int b = test.a;
           int d = test.setCode();
           
           Console.WriteLine(b);
           Console.WriteLine(d);
        }
    }
}