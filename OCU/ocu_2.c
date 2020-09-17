#include <stdio.h>

//cm의 값.
int centi;
//m의 값.
float meter;

int main(void)
{
	printf("센티미터 값을 입력하시오.\n");
	
	//키보드로 부터 정보를 정수형으로 받고 변수 centi에 대입.	
	scanf("%d",&centi);
	printf("\n");
	
    //입력한 정보를 화면에 출력한다.
	printf("입력하신 값은 %d cm 입니다.\n",centi);
	
	//미터 값을 계산하기 위해 입력 받은 정보를 0.01을 곱해준다.
	meter = centi*0.01;
	
	/*계산한 값의 소수형 2번째 자리까지만 
	  화면에 출력한다.*/
	printf(
	"입력하신 값의 미터값은 %.2f m 입니다.\n\n",meter
	);
	
	return 0;
}
