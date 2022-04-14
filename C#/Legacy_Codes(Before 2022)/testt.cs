using System;
using System.IO;
using System.Linq;
using System.Collections.Generic;

namespace CSharp_Shell
{
	public class userInfor
	{
		private string idVal = "simple";
		private int pwVal = 1234;
		
		public string id()
		{
			string val = idVal;
			
			return val;
		}
		
		public int pw()
		{
			int val = pwVal;
			
			return val;
		}
	}

    public static class Program 
    {
        public static void Main() 
        {
           userInfor userInfor = new userInfor();
           
           string userID = userInfor.id();
           int userPW = userInfor.pw();

           
           bool idLoop = true;
           bool pwLoop = true;
           bool loop = true;
           
           while(loop)
           {
           	    Console.WriteLine("Develope Test ID: simple | PW: 1234");
           	    Console.WriteLine("");
           	    
               while(idLoop)
               {
               	   Console.Write("Type ID: ");
                   string takeId = Console.ReadLine();
                   
                   bool idCheck = (takeId == userID);
                   
                   if(idCheck)
                   {
                   	    idLoop = false;
                   }
               }
               
               if(idLoop == false)
               {
               	    while(pwLoop)
               	    {
               	    	Console.Write("Type PW: ");
               	    	string val = Console.ReadLine();
               	    	
               	    	int takePW = int.Parse(val);
               	    	bool pwCheck = (takePW == userPW);
               	    	
               	    	if(pwCheck)
               	    	{
               	    		pwLoop = false;
               	    	}
               	    }
               	    
               	    if(idLoop == pwLoop)
               	    {
               	    	Console.WriteLine("");
               	    	Console.WriteLine("Log In Success!!");
               	    	
               	    	DateTime time;
               	    	time = DateTime.Now;
               	    	
               	    	Console.WriteLine("");
               	    	Console.WriteLine("Log In Date:");
               	    	Console.WriteLine(time.ToLongDateString());
               	    	
               	    	loop = false;
               	    }
               }
               
           }
        }
    }
}