using System;

namespace Login_System
{
    class Program
    {
        private static int menuVal = 0;

        static void Main(string[] args)
        {
            UISystem ui = new UISystem();
            ui.Header();

            ui.Menu_infor();

            while (true)
            {
                menuVal = ui.Get_Menu_Val();
                Console.WriteLine("* Your Selection : " + menuVal + "\n");

                if (menuVal == 1)
                {
                    Console.WriteLine("[Log In]\n");
                }

                else if(menuVal == 2)
                {
                    Console.WriteLine("[Join]\n");
                }

                else if(menuVal == 3)
                {
                    ui.Footer();
                    break;
                }

                else
                {
                    Console.WriteLine("ERROR : You type out of range.");
                    Console.WriteLine("Please Type Again.");
                }
            }
        }
    }
}
