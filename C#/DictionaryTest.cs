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
           Dictionary<string,string>DictionaryTest;
           DictionaryTest = new Dictionary<string, string>();
          
           Console.Write("Type Key: ");
           string key = Console.ReadLine();
           
           Console.Write("Type Value: ");
           string keyValue = Console.ReadLine();
           
           DictionaryTest.Add(key,keyValue);
           
           Console.WriteLine("");
           
           foreach(KeyValuePair<string,string>keyValuePair in DictionaryTest)
           {
           	   Console.WriteLine("key: " + keyValuePair.Key);
           	   Console.WriteLine("Value: " + keyValuePair.Value);
           }
          
        }
    }
}