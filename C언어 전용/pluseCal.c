#include <stdio.h>

int sub(int a, int b);

int A,B,result;

int main(void)
{
	printf("Type first number: ");
	scanf("%d\n",&A);
	
	printf("Type second number: ");
	scanf("%d\n",&B);
	
	result = sub(A,B);
	
	printf("\n");
	printf("Result: %d\n",result);
	
}

int sub(int a, int b)
{
	return a + b;
}
