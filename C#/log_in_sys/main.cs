using System;
using System.IO;
using System.Linq;
using System.Collections.Generic;

namespace CSharp_Shell
{

    public static class Program 
    {
    	static int menuVal;
    	static bool loginChk = false;
    	
        public static void Main() 
        {
           bool menu = true;
           
           Console.WriteLine("<Advanced Log In System>\n");
           
           Console.WriteLine("1. Log In");
           Console.WriteLine("2. Create Account");
           Console.WriteLine("3. Find ID");
           Console.WriteLine("4. Find PW");
           Console.WriteLine("5. Exit\n");
           
           while(menu)
           {
           	   Console.Write("Select the menu: ");
           	   string select = Console.ReadLine();
               menuVal = int.Parse(select);
           
               Console.WriteLine("");
           
               if(menuVal == 1)
               {
                   logInSys();
                   
                   if(loginChk)
                   {
                   	  menu = false;
                   }
               }
               
               else if(menuVal == 2)
               {
               	   createID();
               }
               
               else if(menuVal == 3 || menuVal == 4)
               {
               	   findAccount();
               }
               
               else if(menuVal == 5)
               {
               	  menu = false;
               	  
               	  Console.WriteLine("Have a nice day!\n");
               }
               
               else
               {
               	   Console.WriteLine("Wrong Input! Check the menu numbers.\n");
               }
               
               Console.WriteLine("");
           }
        }
        
        private static void createID()
        {
        	bool create = true;
        	bool pwCheck = true;
        	bool finalCheck = true;
        
            Console.WriteLine("Joining System\n");
        	while(create)
        	{
        		if(pwCheck == false)
        		{
        			pwCheck = true;
        		}
        		
        		if(finalCheck == false)
        		{
        			finalCheck = true;
        		}
        	
        		Console.Write("Type Your First Name: ");
        		string fName = Console.ReadLine();
        		
        		Console.Write("Type Your Last Name: ");
        		string lName = Console.ReadLine();
        		Console.WriteLine("");
        		
        		Console.Write("Type your Gender(M/F): ");
        		string gender = Console.ReadLine();
        		Console.WriteLine("");
        		
        		Console.Write("Type your ID: ");
        		string ID = Console.ReadLine();
        		
        		Console.Write("Type your PW: ");
        		string PW = Console.ReadLine();
        		Console.WriteLine("");
        		
        		while(pwCheck)
        		{
        			Console.Write("Re-Write your PW: ");
        			string pwTest = Console.ReadLine();
        			Console.WriteLine("");
        			
        			if(PW == pwTest)
        			{
        				pwCheck = false;
        			}
        			
        			else
        			{
        				Console.WriteLine("Check your pw.\n");
        			}
        		}
        		
        		Console.WriteLine("Check Your Informations.\n");
        		
        		Console.WriteLine("Your Name: " + fName + lName);
        		
        		if(gender == "M" || gender == "m")
        		{
        			Console.WriteLine("Your Gender: Male");
        		}
        		
        		else if(gender =="F" || gender == "f")
        		{
        			Console.WriteLine("Your Gender: Female");
        		}
        		
        		else
        		{
        			Console.WriteLine("Your Gender: " + gender);
        		}
        		
        		Console.WriteLine("Your ID: " + ID);
        		Console.WriteLine("Your PW: " + PW);
        		Console.WriteLine("");
        		
        		while(finalCheck)
        		{
        			Console.Write("Is it correct all? [Y/N]: ");
        		    string checkInfor = Console.ReadLine();
        		    
        		    if(checkInfor == "Y" || checkInfor == "y")
        		    {
        		    	finalCheck = false;
        		    	create = false;
        		    	
        		    	Console.WriteLine("Welcome " + lName +"!");
        		    	
        		    	string name = fName + lName;
        		    	
        		    	saveInform(name,gender,ID,PW);
        		    }
        		    
        		    else if(checkInfor == "N" || checkInfor =="n")
        		    { 
        		    	finalCheck = false;
        		    	
        		    	Console.WriteLine("");
        		    	Console.WriteLine("The information is deleted. Type again.\n");
        		    }
        		    
        		    else
        		    {
        		    	Console.WriteLine("");
        		    	Console.WriteLine("Type only Uppon or Lower word \n of 'Y' or 'N' !\n");
        		    }
        		}
        		
        	}
        }
        
        private static void logInSys()
        {
        	bool logIn = true;
        	bool idStage = true;
        	bool pwStage = true;
        	
        	Stat stat = new Stat();
        	
        	while(logIn)
        	{
        		while(idStage)
        		{
        			Console.Write("Type Your ID: ");
        	        string idInput = Console.ReadLine();
        	
        	        stat.statSet(idInput);
        	    
        	        bool idChk = stat.idChk(idInput);
        	        
        	        if(idChk)
        	        {
        	        	idStage = false;
        	        }
        		}
        		
        		while(pwStage)
        		{
        			Console.Write("Type your PW: ");
        			string pwInput = Console.ReadLine();
        			
        		    bool pwChk = stat.pwChk(pwInput);
        			
        			if(pwChk)
        			{
        				pwStage = false;
        			}
        		}
        		
        		if(idStage == false && pwStage == false)
        		{
        			Console.WriteLine("");
        			Console.WriteLine("Log In Success! \n");
        			
        			logIn = false;
        			
        			loginChk = true;
        		}
        		
        	}
        }
        
        private static void findAccount()
        {
        	Stat stat = new Stat();
        	
        	if(menuVal == 3)
        	{
        		Console.Write("Type Your First Name: ");
        		string f_name = Console.ReadLine();
        		
        		Console.Write("Type Your Last Name: ");
        		string l_name = Console.ReadLine();
        		
        		string name = f_name + l_name;
        		
        		stat.statSet(name);
        		bool nameCheck = stat.nameCheck(name);
        		
        		if(nameCheck)
        		{
        			Console.WriteLine("");
        			Console.Write("Your ID: ");
        			Console.WriteLine(stat.returnID);
        		}
        	}
        	
        	else if(menuVal == 4)
        	{
        		Console.WriteLine("Success");
        	}
        }
        
        private static void saveInform(string name,string gender, string ID, string PW)
        {
        	FileStream fs;
        	FileStream fd;
        	
        	try
        	{
        		fs = new FileStream(ID + ".txt", FileMode.Create);
        		fd = new FileStream(name + ".txt", FileMode.Create);
        	}
        	
        	catch(IOException)
        	{
        		Console.WriteLine("Can't open the file\n");
        		
        		return;
        	}
        	
        	StreamWriter w = new StreamWriter(fs);
        	StreamWriter w2 = new StreamWriter(fd);
        	
        	w.WriteLine(name);
        	w2.WriteLine(name);
        	
        	w.WriteLine(gender);
        	w2.WriteLine(gender);
        	
        	w.WriteLine(ID);
        	w2.WriteLine(ID);
        	
        	w.WriteLine(PW);
        	w2.WriteLine(PW);
        	
        	w.Close();
        	w2.Close();
        	
        }
    
    }
}