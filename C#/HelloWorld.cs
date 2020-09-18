using System;
using System.IO;
using System.Linq;
using System.Collections.Generic;

namespace BrainCSharp
{

    class HelloWorld
    {
        static void Main(string[] args)
        {
            if(args.Length == 0)
            {
                Console.WriteLine("Use: HelloWorld.exe<Name>");
                return;
            }
            
           Console.WriteLine("Hello, {0}!",args[0]);
        }
    }
}