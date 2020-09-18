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
           bool check = true;
           string getRandom = null;
           
           int pushLenth = 0;
           
           while(check)
           {
             Console.Write("Write Max Length (1 ~ 16): ");
             string inputVal = Console.ReadLine();
             
             pushLenth = int.Parse(inputVal);
             
             if(pushLenth > 0 && pushLenth < 17)
             {
             	check = false;
             }
             
             else
             {
             	Console.WriteLine("Type value in range\n");
             }
             
           }
           
           Console.WriteLine("");
           
           getRandom = rText(pushLenth);
           
           Console.WriteLine(getRandom);
           
        }
        
        public static string rText(int strLen)
        {
        	int i,r;
        	int rnum = 0;
        	string takeRandom = null;
        	
        	System.Random random = new Random();
        	
        	for(i = 0; i < strLen; i++)
        	{
        		rnum = random.Next(33,126);
        			
        			if(rnum > 33 && rnum < 126)
        			{
        				takeRandom += Convert.ToChar(rnum);
        			}
        	}
        	
        	return takeRandom;
        }
    }
    
}