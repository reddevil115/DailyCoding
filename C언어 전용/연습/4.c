#include<stdio.h>

void a(void);
void b(void);
void c(void);

int main(void)
{
	printf("Show \n");
	a();
	b();
	c();
	printf("If something see up here than success!");
	
	return 0;
}

void a(void)
{
	printf("Hello\n");
}

void b(void)
{
	printf("Hola\n");
}

void c(void)
{
	printf("Bonjour\n");
}