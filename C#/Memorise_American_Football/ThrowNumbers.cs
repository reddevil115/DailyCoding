using System;
using System.IO;
using System.Linq;
using System.Collections.Generic;

namespace CSharp_Shell
{

    public class ThrowNumbers 
    {
    	const int numberMin = 1;
    	const int numberMax = 100;
    	
        private int number;
        private Random random = new Random();
        
        public int sendNumbers()
        {
        	int val = random.Next(numberMin,numberMax);
        	number = val;
        	
        	return number;
        }
        
    }
}