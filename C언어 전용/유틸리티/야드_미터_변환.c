#include<stdio.h>
#define METER 0.92

int main(void)
{
	float meter,yard;
	
	printf("야드를 입력하세요.: ");
	scanf("%f/n",&yard);
	
	meter = yard * METER;
	
	printf("변환값\n");
	printf("%.0fm",meter);
	
	return 0;
	
}
