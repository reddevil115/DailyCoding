using System;
using System.IO;
using System.Linq;
using System.Collections.Generic;
using System.Text;
using System.Net.NetworkInformation;
using System.Net.Sockets;
using System.Net;

namespace CSharp_Shell
{

    public static class Program 
    {
        public static void Main() 
        {
           try
           {
           	   IPHostEntry host = Dns.GetHostByName(Dns.GetHostName());
           	   string myIP = host.AddressList[0].ToString();
           	   
           	   Ping ping = new Ping();
           	   PingOptions options = new PingOptions();
           	   
           	   
           	   options.DontFragment = true;
           	   
           	   string data = "aaa";
           	   
           	   byte[]buffer = ASCIIEncoding.ASCII.GetBytes(data);
           	   
           	   int timeOut = 120;
           	   
           	   PingReply reply = ping.Send(IPAddress.Parse(myIP),timeOut,buffer,options);
           	   
           	   Console.WriteLine("IP: " + myIP);
           	   Console.Write("Ping Statue: ");
           	   
           	   if(reply.Status == IPStatus.Success)
           	   {
           	   	    Console.WriteLine("Good");
           	   }
           	   
           	   else
           	   {
           	   	    Console.WriteLine("Bad");
           	   }
           }
           
           catch
           {
           	
           }
           
           finally
           {
           	
           }
        }
    }
}