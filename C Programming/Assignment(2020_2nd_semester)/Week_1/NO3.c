#include<stdio.h>

int main(void)
{
	int number[2];

	printf("Type two numbers.\n");

	for (int i = 0; i < 2; i++)
	{
		number[i] = 0;
		printf("Type #%d Number(Only One Number): ", i+1);
		scanf_s("%d",&number[i]);
	}

	printf("%d + %d = %d\n", number[0], number[1], number[0] + number[1]);
	printf("%d - %d = %d\n", number[0], number[1], number[0] - number[1]);
	printf("%d * %d = %d\n", number[0], number[1], number[0] * number[1]);
	printf("%d / %d = %d\n", number[0], number[1], number[0] / number[1]);
	printf("%d mod %d = %d\n", number[0], number[1], number[0] % number[1]);

	return 0;
}