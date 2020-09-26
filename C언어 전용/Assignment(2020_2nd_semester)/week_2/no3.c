#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define MAX 2

int main(void)
{
	double number[MAX];
	double plus[MAX];
	double minus[MAX];
	double multiple[MAX];
	double devide[MAX];

	double result = 0;
	char symbol = NULL;

	printf("두수를 입력하시오. \n");

	for (int i = 0; i < MAX; i++)
	{
		number[i] = 0;
		scanf("%lf", &number[i]);

	}

	for (int i = 0; i < MAX; i++)
	{
		plus[i] = 0;
		minus[i] = 0;
		multiple[i] = 0;
		devide[i] = 0;

		plus[i] = number[i];
		minus[i] = number[i];
		multiple[i] = number[i];
		devide[i] = number[i];
	}

	// 복합 대입 연산자 사용 시작

	plus[0] += plus[1]; // 더하기
	minus[0] -= minus[1]; // 빼기
	multiple[0] *= multiple[1]; // 곱하기
	devide[0] /= devide[1]; // 나누기

	// 복합 대입 연산자 사용 끝

	for (int i = 0; i < 4; i++)
	{
		result = 0;

		if (i == 0)
		{
			symbol = '+';
			result = plus[0];
		}

		else if (i == 1)
		{
			symbol = '-';
			result = minus[0];
		}

		else if (i == 2)
		{
			symbol = '*';
			result = multiple[0];
		}

		else
		{
			symbol = '/';
			result = devide[0];
		}

		printf("%lf %c %lf = %lf\n", number[0], symbol, number[1], result);
	}
	
	return 0;
}