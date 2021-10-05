#include <stdio.h>

int b;
int c;

int sys(void);
int sys_2(void);

int main(void)
{
	b = sys();
	c= sys_2();
	
	printf("Yes, %d : %d AM here.",b,c);

}

int sys(void)
{
	return 1;
}

int sys_2(void)
{
	return 25;
}
