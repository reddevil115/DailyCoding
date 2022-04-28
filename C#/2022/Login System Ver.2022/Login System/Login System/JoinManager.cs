using System;
using System.Collections.Generic;
using System.Text;
using System;
using System.IO;

namespace Login_System
{
    class JoinManager
    {
        Stat stat = new Stat();

        private string path = null;
        private int id;
        private int pw;

        private string buffer;

        public void JoinSystem()
        {
            buffer = null;
            Console.Write("*Type ID: ");

            buffer = Console.ReadLine();

            SetID(buffer);
        }

        private void SetID(string input)
        {
            buffer = null;
            id = input.GetHashCode();

            path = stat.GetPath(id);

            if(!File.Exists(path))
            {
                Console.Write("*Type PW: ");
                buffer = Console.ReadLine();
                pw = buffer.GetHashCode();

                SetPW(pw);
            }

            else
            {
                id = 0;

                Console.WriteLine("ERRROR : ID is already Taken. \n");
                JoinSystem();
            }
        }

        private void SetPW(int input)
        {
            buffer = null;

            Console.Write("*Type PW Again: ");
            buffer = Console.ReadLine();
            Console.WriteLine();

            if(pw == buffer.GetHashCode())
            {
                buffer = null;
                Console.WriteLine("PW is matched.");
                Console.Write("Do you want to join with this information? [Y/n]: ");
                buffer = Console.ReadLine();

            }

            else
            {
                Console.WriteLine("ERROR: PW is not matched. \n");
                JoinSystem();
            }
        }
    }
}
