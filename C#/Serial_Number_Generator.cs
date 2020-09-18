using System;
using System.IO;
using System.Linq;
using System.Collections.Generic;

namespace CSharp_Shell
{

    public static class Program 
    {
    	static int menuChoice;
    	
        public static void Main() 
        {
        	bool menuSet = true;
        	
        	while(menuSet)
           {
           	   menuSet = menuInfor();
           }
           
           if(menuSet == false && menuChoice == 1)
           {
           	    string getSerial = null;
           	    
           	    getSerial = pushSerial();
           	    
           	    Console.WriteLine("Your Serial Code: \n");
           	    Console.WriteLine(getSerial);
           }
           
           else if(menuSet == false && menuChoice == 2)
           {
           	   Console.WriteLine("Good Bye\n");
           }
        }
        
        public static string pushSerial()
        {
        	int serialMax = 20;
        	int i,j;
        	int count = 0;
        	string serialVal = null;
        	bool error = false;
        	
        	Random random = new Random();
        	
        	for(i = 0; i < serialMax-4; i++)
        	{
        		j = random.Next(48, 122);
        		
        		if(j > 57 && j< 65 || j > 90 && j < 97)
        		{
        			i--;
        			error = true;
        		}
        		
        		else
        		{
        			serialVal += Convert.ToChar(j);
        			count++;
        			error = false;
        		}
        		
        		if(error == false && count == 4 || error == false && 
        		error == false && count == 8 || error == false && count == 12)
        		{
        			serialVal += "-";
        		}
        	
        	}
        	
        	return serialVal;
        }
        
        public static bool menuInfor()
        {
        	int menuVal = 0;
        	
        	Console.WriteLine("1. Get Serial Code");
        	Console.WriteLine("2. Exit\n");
        	Console.Write("Type Option: ");
        	
        	string input = Console.ReadLine();
        	
        	Console.WriteLine("");
        	
        	menuVal = int.Parse(input);
        	menuChoice = menuVal;
        	
        	
        	if(menuVal == 1)
        	{
        		return false;
        	}
        	
        	else if(menuVal == 2)
        	{
        		return false;
        	}
        	
        	else
        	{
        		Console.WriteLine("That is not menu number available.\n");
        		return true;
        	}
        }
    }
}