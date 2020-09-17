#include<stdio.h>

void assemblyCall(int a, int b);

void main()
{
	int noOne = 0;
	int noTwo = 0;

	assemblyCall(noOne, noTwo);
}

void assemblyCall(int a, int b)
{
	__asm
	{
		MOV esi, 8// %esi에 8을 저장
		MOV edi, 4// %edi에 4를 저장

		MOV a, esi
		MOV b, edi
	}

	printf("%d\n", a);
	printf("%d",b);
}


