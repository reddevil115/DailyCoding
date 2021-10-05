#include <stdio.h>

int main(void)
{
	int number = 0;
	int calculated = 0;

	printf("Type a number.\n");
	printf("Number: ");

	scanf_s("%d", &number);

	for (int i = 1; i < 10; i++)
	{
		calculated = i * number;
		printf("%d x %d = %d\n",i,number,calculated);
		calculated = 0;
	}

	return 0;
}