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

	printf("�μ��� �Է��Ͻÿ�. \n");

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

	// ���� ���� ������ ��� ����

	plus[0] += plus[1]; // ���ϱ�
	minus[0] -= minus[1]; // ����
	multiple[0] *= multiple[1]; // ���ϱ�
	devide[0] /= devide[1]; // ������

	// ���� ���� ������ ��� ��

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