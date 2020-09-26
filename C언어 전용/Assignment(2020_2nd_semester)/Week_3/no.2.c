#include<stdio.h>

int main(void)
{
	int inputNumber = 0;
	int index = 0;
	long long result = 1;

	printf("수를 입력하세요: ");
	scanf_s("%11d", &inputNumber);

	for (index = inputNumber; index > 0; index--)
	{
		result *= index;
	}

	printf("결과 값은 %lld 입니다.\n", result);

	return 0;
}