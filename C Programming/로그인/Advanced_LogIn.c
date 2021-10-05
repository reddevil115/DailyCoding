#include <stdio.h>
#define ID 2018
#define PW 1234
#define Enter 0000

int main(void)
{
	int id,pw,i,a;
	
	printf("Log In System\n\n");
	
	printf("*********************************************\n");
	printf("Type your ID and PW for Log In \n");
	printf("If you want Log Out, Type '0000'\n");
	
	printf("*********************************************\n\n");
	
	for(i=0; i<1;i++)
	{
		while(1)
		{
			printf("Type your id: ");
			scanf("%d\n",&id);
			
			if(id==ID)
			break;
		}
		
		while(1)
		{
			printf("Type your PW: ");
			scanf("%d/n",&pw);
			
			if(pw==PW)	
			{
			 printf("Log In Success!\n");
			 break;
			}
			
		}
		
		
		printf("\n<Menu> \n");
		printf("0000: LogOut\n");
		
		while(1)
		
		{
			printf("\nEnter Key\n");
			scanf("%d\n",&a);
			
			if(a==Enter)
			{
			i--;
			id-=2018;
			pw-=1234;
			printf("Log Out Success!!\n\n");
			}
			
			break;
		}
		
		
		
	}
	
}
