#include<stdio.h>

int main(void)
{
	int inputNumber = 0;
	int index = 0;
	long long result = 1;

	printf("���� �Է��ϼ���: ");
	scanf_s("%11d", &inputNumber);

	for (index = inputNumber; index > 0; index--)
	{
		result *= index;
	}

	printf("��� ���� %lld �Դϴ�.\n", result);

	return 0;
}