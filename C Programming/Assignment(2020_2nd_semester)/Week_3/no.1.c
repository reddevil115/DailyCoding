#include<stdio.h>

int main(void)
{
	int inputNumber = 0;
	int oddCount = 1;
	int result = 0;

	printf("���� �Է��ϼ���: ");
	scanf_s("%d", &inputNumber);

	do
	{
		result += oddCount;
		oddCount += 2;

	} while (oddCount < inputNumber);

	printf("0���� %d���� �� �� Ȧ������ ���� %d �Դϴ�.\n",inputNumber,result);

	return 0;
}