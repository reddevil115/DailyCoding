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
           string strVal = null;
           Random random = new Random();
           
           Console.Write("Write minimum point: ");
           string inputVal = Console.ReadLine();
           
           int minimum = int.Parse(inputVal);
           
           inputVal = null;
           
           Console.Write("Write maximum point: ");
           inputVal = Console.ReadLine();
           
           int maximum = int.Parse(inputVal);
           
           int val = random.Next(minimum,maximum);
           strVal += Convert.ToChar(val);
           
           Console.WriteLine("minimum: {0}, maximum: {1}, String: {2}", minimum,maximum,strVal);
        }
    }
}