using System;
using System.IO;
using System.Linq;
using System.Collections.Generic;

namespace CSharp_Shell
{

    public class menu
    {
    	private int pizzaCost = 10000;
    	private int pastaCost = 5000;
    	private int burgurCost = 4000;
    	private int sodaCost = 1000;
    	
    	public int menuVal(string choice)
    	{
    		int val = 0;
    		
    		if(choice == "pizza" || choice == "1")
    		{
    			val = pizzaCost;
    		}
    		
    		else if(choice == "pasta" || choice == "2")
    		{
    			val = pastaCost;
    		}
    		
    		else if(choice == "burgur" || choice == "3")
    		{
    			val = burgurCost;
    		}
    		
    		else if(choice == "soda" || choice == "4")
    		{
    			val = sodaCost;
    		}
    		
    		return val;
    	}
    }
}