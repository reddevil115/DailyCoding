#include<stdio.h>
#define ID 2018
#define PW 1234
#define KEY 0000

int main(void)
{
	int id,pw,key;
	
	printf("Log In System\n\n");
	
	printf("*********************************************\n");
	printf("Type your ID and PW for Log In \n");
	printf("If you want Log Out, Type '0000'\n");
	
	printf("*********************************************\n\n");
	
	id_stage:
   	 printf("Type your id: ");
	 scanf("%d",&id);
	
	if(ID == id)
	{
	   printf("Type your pw: ");
	   scanf("%d",&pw);
	   
	   if(PW == pw)
	   printf("\nLog In Success!\n");
	   
	   scanf("%d",&key);
	   if(KEY==key)
	   id-=2018;
	   pw-=1234;
	   printf("\nLog Out Success!\n\n");
	   goto id_stage;
	}
	
	
    else
	  goto id_stage;
	
	
}
