#include <stdio.h>

#define indusval 15.21
#define hmhtval 16.35
#define hmckval 15.72

int app_code,fee,tax,useval;
float tfee;

int main(void)
{
	printf("도시 가스 요금 계산 프로그램\n"),
	printf(
	"****************************************************\n"
	);
	
	printf("<용도 코드>\n\n");
	printf("1. 산업용\n");
	printf("2. 가정용(난방)\n");
	printf("3. 가정용(취사)\n\n");
	
	printf(
	"****************************************************\n\n"
	);
	
	printf("용도 코드를 입력하세요.\n");
	scanf("%d",&app_code);
	printf("\n");
	
	if(app_code == 1)
	{
		tfee = indusval;
	}
	
	else if(app_code == 2)
	{
		tfee = hmhtval;
	}
	
	else if(app_code == 3)
	{
		tfee = hmckval;
	}
	
	else
	{
		printf("없는 코드입니다.\n");
		printf(
		"확인 후 처음 부터 다시 진행해주세요.\n\n"
		);
	}
	
	if(
	app_code == 1 || app_code == 2 || app_code == 3)		
	{
		printf("사용량을 입력하세요.\n");
	    scanf("%d",&useval);
	    printf("\n");
	
	    tfee = ((fee = tfee*useval)+900) + 
	         (tax = ((fee + 900)/10));
	
	    printf(
		"총 사용요금은 %0.f원 입니다.\n\n",tfee
		);
		
		printf("**상세 명세서**\n\n");
		printf("1.기본료: 900원\n");
		printf(
		"2.사용료(%dMJ): %d원\n",useval,fee
		);
		printf("3.세금: %d원\n",tax);
		printf("4.총 요금: %0.f원\n",tfee);	
	}
	
	return 0;
	
}
