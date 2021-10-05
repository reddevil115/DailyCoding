#include<stdio.h>

int krw;
float jpy;
float rate;

int main(void)
{
	printf("환율정보를 입력하세요. \n");
	printf("환율은 1원 단위로 입력하세요.\n");
	scanf("%f",&rate);
	
	printf("원화를 입력하세요.: \n");
	scanf("%d",&krw);
	
	jpy = krw*rate;
	
	printf("원화 %d원은 %.2f 엔 입니다.",krw,jpy);
	
	return 0;
	
}
