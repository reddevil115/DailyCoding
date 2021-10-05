#include<stdio.h>

void fun1(void);

int main(void)

{
	printf("main() start!! \n");
	fun1();
	printf("main() end!! \n");
	
	return 0;
	
}

void fun1(void)
{
	printf("fun1() start!! \n");
	printf("fun1() end!! \n");
}
