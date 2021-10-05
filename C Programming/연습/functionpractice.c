#include <stdio.h>

int square(int n);

int main(void)
{
	int result,i;
	
	printf("Type number: ");
	scanf("%d\t\n",&i);
	
	result = square(i);
	
	printf("Calculate result: ");
	printf("%d\n",result);
	
	return 0;
}

int square(int n)
{
	return(n*n);
}
