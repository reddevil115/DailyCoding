#include<stdio.h>
#define ANSWER_1 100
#define ANSWER_2 200

int main(void)
{
	int x,y,sum;
	
	sum = 0;
	
	printf("50+50= ");
	scanf("%d\n",&x);
	
	if(x==ANSWER_1)
	 {
	 	 printf("정답입니다.\n");
	     sum += 10;
	  
	 }
	
	
	printf("현재 점수 %d\n\n",sum);
	
	printf("100+100= ");
	scanf("%d\n",&y);
	
	if(y==ANSWER_2)
	 {
	    printf("정답입니다.\n");
	    sum += 10;
	 }

	 printf("현재 점수 %d", sum);
	
	return 0;
	
}
