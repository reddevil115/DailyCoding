using System;
using System.Collections.Generic;
using System.Text;
using System.IO;

namespace Login_System
{
    class JoinManager
    {
        Stat stat = new Stat();

        private string path = null;
        private string id;
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
            id = input;

            path = stat.GetIdPath(id) + ".txt";

            if(!File.Exists(path))
            {
                Console.Write("*Type PW: ");
                buffer = Console.ReadLine();
                pw = buffer.GetHashCode();

                SetPW(pw);
            }

            else
            {
                id = null;

                Console.WriteLine("ERRROR: ID is already Taken. \n");
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
                Console.WriteLine();

                if(buffer.Equals("Y"))
                {
                    buffer = null;
                    buffer = stat.GetTimeStamp();

                    Directory.CreateDirectory(Path.GetDirectoryName(path));

                    File.AppendAllText(path, pw.ToString() + Environment.NewLine);
                    File.AppendAllText(path, buffer + Environment.NewLine);

                    Console.WriteLine("Congratuations!");
                    Console.WriteLine("You just Complete To Join Our System.");
                    Console.WriteLine("Your Joined Time: " + buffer);
                    Console.WriteLine();
                }

                else if(buffer.Equals("n"))
                {
                    Console.WriteLine("ERROR: You Selected 'n'.");
                    Console.WriteLine("Type Information Again. \n");

                    JoinSystem();
                }

                else
                {
                    Console.WriteLine("ERROR: You Type Wrong Value.");
                    Console.WriteLine("Type Information Again. \n");

                    JoinSystem();
                }

            }

            else
            {
                Console.WriteLine("ERROR: PW is not matched. \n");
                JoinSystem();
            }
        }
    }
}
