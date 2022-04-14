using System;
using System.IO;
using System.Linq;
using System.Collections.Generic;

namespace CSharp_Shell
{

    public class Stat 
    {
        private string idVal = null;
        private string pwVal = null;
        
        public string returnID = null;
        public string returnPW = null;
        
        private string name = null;
        private string gender = null;
        
        public void statSet(string val)
        {
        	int lineNo = 1;
        	
        	FileStream fs;
        	
        	try
        	{
        		fs = new FileStream(val + ".txt",FileMode.Open);
        	}
        	
        	catch(IOException)
        	{
        		Console.WriteLine("");
        		Console.WriteLine("Your ID is not exist. \n");
        		return;
        	}
        	
        	StreamReader r = new StreamReader(fs);
        	
        	while(!r.EndOfStream)
        	{
        		if(lineNo == 1)
        		{
        			name = r.ReadLine();
        		}
        		
        		else if(lineNo == 2)
        		{
        			gender = r.ReadLine();
        		}
        		
        		else if(lineNo == 3)
        		{
        			idVal = r.ReadLine();
        		}
        		
        		else if(lineNo == 4)
        		{
        			pwVal = r.ReadLine();
        		}
        		
        		else
        		{
        			r.ReadLine();
        		}
        		
        		lineNo++;
        	}
        	
        	r.Close();
        }
        
        public bool idChk(string val)
        {
        	
        	if(idVal == val)
        	{
        		return true;
        	}
        	
        	else
        	{
        		return false;
        	}
        }
        
        public bool pwChk(string val)
        {
        	if(pwVal == val)
        	{
        		return true;
        	}
        	
        	else
        	{
        		return false;
        	}
        }
        
        public bool nameCheck(string val)
        {
        	if(name == val)
        	{
        		returnID = idVal;
        		return true;
        	}
        	
        	else
        	{
        		return false;
        	}
        }
        
        public bool genderCheck(string val)
        {
        	if(gender == val)
        	{
        		return true;
        	}
        	
        	else
        	{
        		return false;
        	}
        }
    }
}