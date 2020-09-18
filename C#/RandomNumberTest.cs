using System;
using System.IO;
using System.Linq;
using System.Collections.Generic;
using System.Threading;

namespace CSharp_Shell
{

    public static class Program 
    {
        public static void Main() 
        {
           int max = 50;
           int selectMax = 25;
           int selectVal = 0;
           int selectCount = 0;
           
           bool isContinue = true;
          
           int[] select = new int[selectMax];
           Random random = new Random();
           
           for(int i = 0; i < selectMax; i++)
           {
           	    select[i] = 0;
           }
           
           while(isContinue)
           {
           	    selectVal = random.Next(1,max);
           	    
           	    for(int i = 0; i < selectMax; i++)
           	    {
           	    	if(selectVal == select[i])
           	    	{
           	    		selectVal = 0;
           	    		i--;
           	    		break;
           	    	}
           	    }
           	    
           	    select[selectCount] = selectVal;
           	    
           	    if(select[selectCount] != 0)
           	    {
           	        selectCount++;
           	    }
           	    
           	    if(selectCount == selectMax)
           	    {
           	    	isContinue = false;
           	    }
           }
           
           for(int i = 0; i < selectMax; i++)
           {
           	    int index = i + 1;
           	    
           	    Console.WriteLine("#" + index);
           	    Console.WriteLine(select[i] + "\n");
           	    Thread.Sleep(1000);
           }
        }
    }
}