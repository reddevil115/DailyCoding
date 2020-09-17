#include <stdio.h>
#include <string.h>

void signcheck(void);

struct sign {
	char name[40];
	char ID[20];
	int PW;
	}new;
	
int id,pw,result;
char sign[]=("sign");
char SIGN[];
	
int main(void)
{
	
	printf("If you want to sign in type 'sign'\n");
	gets(SIGN);
	
	signcheck();
	
	if(result == 0)
	{
		printf("\n");
		printf("<Sign in>\n\n");
		printf("Type your name: \n\n");
		gets(new.name);
		
		printf("\n");
		printf("Type your ID: \n\n");
		gets(new.ID);
		
		printf("\n");
		printf("Type your PW: \n\n");
		scanf("%d%*c\n",&new.PW);
		printf("\n");
		
		while(1)
		{
			printf("Retype your PW: \n\n");
			scanf("%d%*c",&pw);
			
			if(pw == new.PW)
			{
				printf("That's consistent\n\n");
				break;
			}
			
			else
			printf("Check your PW\n\n");
		}
		
		printf("\n");
		printf("<Check your information> \n\n");
		
		printf("Your name: %s\n",new.name);
		printf("Your ID: %s\n",new.ID);
		printf("Your PW: %d\n\n",new.PW);

	}
}

void signcheck(void)
{
	result = strcmp(sign,SIGN);
}
