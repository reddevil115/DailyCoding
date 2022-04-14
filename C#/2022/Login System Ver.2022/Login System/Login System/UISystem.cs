using System;
using System.Collections.Generic;
using System.Text;

namespace Login_System
{
    class UISystem
    {
        private int buffer = 0;

        public void Menu_infor()
        {
            Console.WriteLine("************************************* MENU *****************************************");
            Console.WriteLine("1. Login");
            Console.WriteLine("2. Join");
            Console.WriteLine("************************************************************************************\n");
        }

        public int Get_Menu_Val()
        {
            Console.Write("* Type number of menu : ");
            buffer = int.Parse(Console.ReadLine());

            return buffer;
        }

        public void Header()
        {
            Console.WriteLine(" < Login System > \n");
        }

        public void Footer()
        {
            Console.WriteLine("Program End.");
            Console.WriteLine("The TEAM FIFTY SEVEN");
        }
    }
}
