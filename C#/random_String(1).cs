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
        	int key = 16;
            string val = randomtext(key);
            
            Console.WriteLine(val);
        }
        
        
       //#region 랜덤문자열을 만들어주는 함수
        public static string randomtext(int strLen)
       {
            int rnum = 0;
            int i, j;
            string ranStr = null;
            
            System.Random ranNum = new System.Random();
            
            for (i = 0; i <= strLen; i++)
            {
                for (j = 0; j <= 122; j++)
                {
                    rnum = ranNum.Next(48, 123);
                    
                    if (rnum >= 48 && rnum <= 122 && (rnum <= 57 || rnum >= 65) && (rnum <= 90 || rnum >= 97))
                    {
                        break;
                    }
               }
                
                ranStr += Convert.ToChar(rnum);
            }
            
           return ranStr;
         
           //#endregion
       }
    }
}