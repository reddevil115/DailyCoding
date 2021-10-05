#include<stdio.h>

int main(void)
{
	int inputNumber = 0;
	int oddCount = 1;
	int result = 0;

	printf("수를 입력하세요: ");
	scanf_s("%d", &inputNumber);

	do
	{
		result += oddCount;
		oddCount += 2;

	} while (oddCount < inputNumber);

	printf("0부터 %d까지 수 중 홀수들의 합은 %d 입니다.\n",inputNumber,result);

	return 0;
}