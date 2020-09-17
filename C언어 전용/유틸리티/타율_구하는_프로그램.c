#include<stdio.h>

float hit;
float box;
double avg;

int main(void)
{
	printf("<타율 구하는 프로그램>\n");
	printf("\n");
	printf("안타 갯수를 입력하세요.\n");
	scanf("%f",&hit);
	
	printf("타석수를 입력하세요.\n");
	scanf("%f",&box);
	
	avg = hit/box;
	
	printf("타율은 %.3lf 입니다.",avg);
	
	return 0;
}
