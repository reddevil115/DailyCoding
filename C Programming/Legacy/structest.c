#include <stdio.h>

#define max 10

int input_sys();

int i;
int val[max];

struct test
	{
		int infor;
		char val[max];
		
	}t[max];

int main(void)
{
	
	
	for(i = 0; i < max; i++)
	{
		val[i] = input_sys();
		t[i].infor = val[i];
	}
	
	for(i = 0; i < max; i++)
	{
		printf("%d\n",val[i]);
		printf("%d\n",t[i].infor);
		printf("%s\n\n",t[i].val);
	}
	
}

int input_sys()
{
	int no = i + 1, inputval;
	
	printf("Input #%d student information\n",no);
	printf("\n");
	
	printf("#%d student name: ",no);
	scanf("%s",&t[i].val);
	
	printf("#%d student id: ",no);
	scanf("%d",&inputval);
	
	printf("\n");
	
	return inputval;
}
