#include <stdio.h>

int main(void)
{
	int a, b, stop, sum;
	
	stop = 0000;
	
	while(1)
	{
	   printf("Type your first number: ");
	   scanf("%d\n\n",&a);
	   
	   if(a==stop)
	   break;
	   
	   printf("\nType your Second number: ");
	   scanf("%d\n\n",&b);
	   if(b==stop)
	   break;
	   
	   sum = a + b;
	   
	   printf("\nSum: %d\n\n",sum);
	   
	   
	}
	
}