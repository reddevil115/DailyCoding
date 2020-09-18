using System;
using System.IO;
using System.Linq;
using System.Collections.Generic;
using System.Text;

namespace CSharp_Shell
{

    public static class Program 
    {
        public static void Main() 
        {
        	string name = null;
        	string check = null;
        	string statue = null;
        	
        	Console.Write("Type your nickname: ");
        	name = Console.ReadLine();
        	Console.WriteLine("");
        	
            string strPath = AppDomain.CurrentDomain.BaseDirectory;
            string newPath = strPath + "save";
            string fileName = name + ".txt";
            string userFileName = Path.Combine(newPath,fileName);
            
            Directory.CreateDirectory(Path.GetDirectoryName(userFileName));
            
            FileInfo fi = new FileInfo(userFileName);
            
            if(fi.Exists == false)
            {
            	statue = "new";
            }
            
            else
            {
            	statue ="old";
            }
            
            Console.WriteLine("File Statue: " + statue+ "\n");
            
            using(FileStream fs = new FileStream(userFileName, FileMode.Create))
            {
            	
            	StreamWriter w = new StreamWriter(fs);
            	w.WriteLine(name);
            	
            	w.Close();
            }
            
            using(FileStream fd = new FileStream(userFileName, FileMode.Open))
            {
            	int lineNo = 1;
            	
            	StreamReader r = new StreamReader(fd);
            	
            	while(!r.EndOfStream)
            	{
            		if(lineNo == 1)
            		{
            		    check = r.ReadLine();
            		}
            	}
            	
            	r.Close();
            	
            	Console.WriteLine("Your Information is saved in a file.\n");
            	Console.WriteLine("Your nickname: " + check);
            	
            }
        }
        
    }
}