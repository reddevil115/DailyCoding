using System;
using System.IO;
using System.Linq;
using System.Collections.Generic;
using System.Diagnostics;
using System.Net;
using System.Net.Sockets;
using System.Text;
using System.Net.NetworkInformation;

namespace CSharp_Shell
{

    public static class Program 
    {
        public static void Main(/*string[] args*/) 
        {
           /*if(args.Length < 1)
           {
           	   Console.WriteLine("How to use: {0}<Bind IP>",
           	   Process.GetCurrentProcess().ProcessName);
           	   
           	   return;
           }*/
           
           IPHostEntry host = Dns.GetHostByName(Dns.GetHostName());
           string myIP = host.AddressList[0].ToString();
           
           string bindIp = /*args[0];*/ myIP;
           const int bindPort = 5425;
           TcpListener server = null;
           
           Console.WriteLine("< Echo Server Test >\n");
           Console.WriteLine("Server IP: {0}\n", myIP);
           
           try
           {
           	   IPEndPoint localAddress = new IPEndPoint(IPAddress.Parse(bindIp),bindPort);
           	   
           	   server = new TcpListener(localAddress);
           	   
           	   server.Start();
           	   
           	   Console.WriteLine("Echo Server Start...");
           
           while(true)
           {
           	    TcpClient client = server.AcceptTcpClient();
           	    Console.WriteLine("Client Connect: {0}",
           	    ((IPEndPoint)client.Client.RemoteEndPoint).ToString());
           	    
           	    NetworkStream stream = client.GetStream();
           	    
           	    int length;
           	    string data = null;
           	    byte[] bytes = new byte[256];
           	    
           	    while((length = stream.Read(bytes,0,bytes.Length)) != 0)
           	    {
           	    	data = Encoding.Default.GetString(bytes,0,length);
           	    	
           	    	Console.WriteLine(String.Format("Receive: {0}",data));
           	    	
           	    	byte[] msg = Encoding.Default.GetBytes(data);
           	    	stream.Write(msg,0,msg.Length);
           	    	Console.WriteLine(String.Format("Send: {0}",data));
           	    }
           	    
           	    stream.Close();
           	    client.Close();
           	    
           }//while true 
         }//try
           
           catch (SocketException e)
           {
           	  Console.WriteLine(e);
           }
           
           finally
           {
           	  server.Stop();
           }
           
           Console.WriteLine("Server is end.");
           
        }
        
        
    }
}