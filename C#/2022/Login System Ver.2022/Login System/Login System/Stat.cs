using System;
using System.Collections.Generic;
using System.Text;
using System;
using System.IO;

namespace Login_System
{
    class Stat
    {
        private string path = Directory.GetCurrentDirectory();

        public string GetPath(int IDHash)
        {
            path += "\\Save" + "\\" + IDHash;

            return path;
        }
    }
}
