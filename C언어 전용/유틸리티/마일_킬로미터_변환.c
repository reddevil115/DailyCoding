#include <stdio.h>
#define KILO 1.61

int main(void)
{
	float kilo,mile;
	
	printf("마일을 입력해주세요.: ");
	scanf("%f\n",& mile);
	
	kilo = mile * KILO;
	
	printf("변환 값\n");
	printf("%.0fkm",kilo);
	
	return 0;
	
}
