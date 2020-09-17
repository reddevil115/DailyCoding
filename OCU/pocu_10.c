#include <stdio.h>
#include <string.h>

#define max 100

int input_sys();
int find_sys(char val);

int tylen,next,no,addval;

char type[max],findval[max];

int main(void)
{
	while(1)
	{
		tylen = input_sys();
		
		if(tylen > 20)
		{
			printf("%s\n",findval);
			break;
		}
		
		else
		{
			printf(
			"너무 짧습니다. 20자리 이상의 문자를 입력하세요.\n\n"
			);
		}
	}
	
}

int input_sys()
{
	int cal, adddec;
	char dec;
	
	char *find = &type;
	
	printf("20자리 이상의 문자를 입력하세요.\n");
	gets(type);
	printf("\n");
	
	cal = strlen(type);
	
    for(no = 0; no < cal; no++)
    {
    	dec, adddec = find_sys(*find + no);
    	
    	if(adddec == 1)
    	{
    		findval[addval];
    		
    		addval++;
    	}
    }
	
	return cal;
}

int find_sys(char val)
{
   int decval,fno;
   char fval;
   
   decval = (int)val;
   
   if(decval < 91 && decval > 64 ||
		decval< 123 && decval > 96)
   {
   	   fno = 0;
   	   
   	   return 0, fno;
   }
   
   else
   {
   	    fval = (char)decval;
   	    fno = 1;
   	    
   	    return fval, fno;
   }
}
