using System;
using System.Collections.Generic;
using System.Text;
using System.IO;

namespace Login_System
{
    class Stat
    {
        private DateTime dateTime = new DateTime();
        private string path = Directory.GetCurrentDirectory();


        // GetPath Type Code : 1. Account 2. Data 3. Log 

        public string GetIdPath(string ID)
        {
            path += "\\Save" + "\\Accounts" + "\\" + ID;

            return path;
        }

        public string GetDataPath(string fileName)
        {
            path += "\\Save" + "\\Data" + "\\" + fileName;

            return path;
        }

        public string GetLogPath(string fileName)
        {
            path += "\\Save" + "\\Log" + "\\" + fileName;

            return path;
        }

        public string GetTimeStamp()
        {
            dateTime = DateTime.Now;

            return dateTime.ToString("yyyy-MM-dd-HH:mm");
        }
    }
}
