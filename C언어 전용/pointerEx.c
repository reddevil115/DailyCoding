#include <stdio.h>

char a;
int *ptr_a;

int main(void)
{
	 a = 'c';
	
	ptr_a = &a;
	
	printf("%c\n",a);
	printf("%d\n",*ptr_a);
}
