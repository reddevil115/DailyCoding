#include<stdio.h>

#define ID simple
#define PW 1234

char id[6];
char ID[6];
int pw,i;

void IDfunction(int checkID);
void PWfunction(int checkPW);

int main(void)
{
	int checkID = 0;
	int checkPW	= 0;
	
	while(i)
	{
	    IDfunction(checkID);
	}
}

void IDfunction(int checkID)
{
	printf("Type your ID: ");
	gets(id);
	
	if(id==ID)
	  checkID==1;
}
