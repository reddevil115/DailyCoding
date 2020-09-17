#include<stdio.h>
#define ID 2018
#define PW 1234

int main(void)
{
	int id,pw,result;
	
	printf("<로그인 시스템>\n");
	printf("\n");
	
	printf("id를 입력해주세요: ");
	scanf("%d/n",&id);
	
	printf("pw를 입력해주세요: ");
	scanf("%d/n",&pw);
	printf("\n");
	
	result = (id==ID)&&(pw==PW);
	
	if (result==1)
	   printf("로그인 되었습니다.");
	
	else
	   printf("id나pw중 하나가 틀렸습니다.");
	
	return 0;
	
}
