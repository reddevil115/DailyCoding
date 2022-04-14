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
        	string s;
        	
        	Console.WriteLine("Type Contents:");
        	s = Console.ReadLine();
        	Console.WriteLine();
        	
        	FileStream fs;
        	
        	try
        	{
        		fs = new FileStream("file.txt", FileMode.Create);
        	}
        	
        	catch(IOException)
        	{
        		Console.WriteLine("Can not open the file");
        		return;
        	}
        	
        	StreamWriter w = new StreamWriter(fs);
        	w.Write(s);
        	
        	w.Close();
        	
        	try
        	{
        		fs = new FileStream("file.txt",FileMode.Open);
        	}
        	
        	catch(IOException)
        	{
        		Console.WriteLine("Can not open the file");
        		return;
        	}
        	
        	StreamReader r = new StreamReader(fs);
        	
        	while((s = r.ReadLine()) != null)
        	{
        		Console.WriteLine("You write file in:");
        		Console.WriteLine(s);
        	}
       
        	r.Close();
        }
    }
}