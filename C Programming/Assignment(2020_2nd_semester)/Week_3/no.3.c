#include<stdio.h>

int main(void)
{
	int thou = 0;
	int hund = 0;
	int ten = 0;
	int underTen = 0;

	int input = 0;

	printf("4�ڸ� ���� �Է��ϼ���: ");
	scanf_s("%d", &input);

	while (1)
	{
		if (input > 999)
		{
			thou = input / 1000;
			input -= thou * 1000;
		}

		else if (input >99)
		{
			hund = input / 100;
			input -= hund * 100;
		}

		else if (input > 9)
		{
			ten = input / 10;
			input -= ten * 10;
		}

		else if (input > 0)
		{
			underTen = input;
			input = 0;
			break;
		}

		else
		{
			printf("�߸��� ���� �Է��߽��ϴ�.\n");
			break;
		}
	}

	input = thou + hund + ten + underTen;
	
	printf("���� %d�Դϴ�.\n", input);

	return 0;
}