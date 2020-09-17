#include <stdio.h>

int main(void)
{
	signed number;
	
	scanf("%d",&number);
	
	number &= ~(1<<8);
	
	if(number < 0)
	{
		number = (number + 2) * -1;
	}
	
	printf("\n");
	printf("%d",number);
}
