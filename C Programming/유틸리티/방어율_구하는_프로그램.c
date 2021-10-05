#include<stdio.h>

int score;
int inning;
int stage1;
float era;

int main(void)
{
	printf("<방어율 구하는 프로그램>\n");
	printf("\n");
	printf("자책점을 입력하세요.\n");
	scanf("%d",&score);
	
	printf("등판 이닝 수를 입력하세요.\n");
	scanf("%d",&inning);
	
	stage1 = score*9;
	
	era = stage1/inning;
	
	
	printf("방어율은 %.2f 입니다.",era);
	
	return 0;
}
