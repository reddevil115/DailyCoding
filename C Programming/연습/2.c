#include<stdio.h>

void k(void);

int main(void)
{
	
	printf("test \n");
	k();
	printf("success\n");
	
	return 0;
}
	
void k(void)
{
	printf("if this print middle \n");
}
