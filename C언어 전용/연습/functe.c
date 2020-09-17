#include <stdio.h>
#include <string.h>

int main(void)
{
	char ID[10]= ("simple");
	char id[10];
	
	int i,result;
	
	printf("Type your id: ");
	gets(id);
	
	result = strcmp(id,ID);
	
	if(result == 0)
	   printf("ok\n");
	
	else
	   printf("Fail\n");
}
