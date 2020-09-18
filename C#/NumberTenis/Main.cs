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
          bool Menu = true;
          
          MenuAdmin menuAdmin = new MenuAdmin();
          GameRule gameRule = new GameRule();
          
          while(Menu)
          {
          	int menuVal = menuAdmin.menu();
          	
          	if(menuVal == 2)
          	{
          		Menu = false;
          		gameRule.ruleInfor();
          	}
          	
          	else if(menuVal == 3)
          	{
          		Menu = false;
          	}
          }
        }
    }
}