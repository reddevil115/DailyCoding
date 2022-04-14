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

            menuVal = ui.Get_Menu_Val();

            Console.WriteLine("* Your Selection : " + menuVal);
        }
    }
}
