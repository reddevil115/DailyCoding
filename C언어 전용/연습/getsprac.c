#include<stdio.h>

int main(void)
{
	char name[10];
	
	printf("Type your name: ");
	gets(name);
	
	printf("%s\n",name);
	
	return 0;
}
