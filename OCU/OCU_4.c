#include <stdio.h>
#include <math.h>

float length,height,area;

int main(void)
{
	printf(
	"정삼각형의 한 변의 길이를 소수점 형태로 입력하시오.\n"
	);
	
	scanf("%f",&length);
	printf("\n");
	
	height = sqrt(3.0)/2 * length;
	area = (length * height)/2;
	
	printf(
	"정삼각형의 한변의 길이는 %.2f 입니다.\n",length
	);
	printf(
	"정삼각형의 높이는 %.2f 입니다.\n",height
	);
	printf("정삼각형의 넓이는 %.2f 입니다.\n",area);
	
	return 0;
	
}
