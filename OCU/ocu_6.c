#include <stdio.h>

#define max 8

int comi[max];

int turn, no, chance, maxival, minival, sum;
int average;

int main(void)
{
	printf("*****************\n");
	printf("*제품 평가 시스템*\n");
	printf("*****************\n\n");
	
	while(1)
	{
		turn++;
	
		printf(
		"%d번째 위원님 점수를 입력해 주세요.\n",turn
		);
		scanf("%d",&comi[no]);
		printf("\n");
		
		if(
		comi[no] > -1 && comi[no] < 101 && no < max
		)
		{
			sum += comi[no];
			no += 1;
		}
		
		else
		{
			printf(
			"0 ~ 100사이의 수를 입력해주세요.\n\n"
			);
			
			turn -= 1;
			
		}
		
		if(no == max)
		{
			turn = 0;
			break;
		}
	
	}
	
	maxival = comi[0];
	minival = comi[0];
	
	for(no = 0; no < max; no++)
	{
		if(maxival < comi[no])
		{
			maxival = comi[no];
		}
	}
	
	for(no = 0; no < max; no++)
	{
		if(minival > comi[no])
		{
			minival = comi[no];
		}
	}
	
	sum -= (maxival + minival);
	
	average = sum / (max - 2);
	
	printf("*****입력 결과*****\n\n");
	
	for(no = 0; no < max; no++)
	{
		turn++;
		
		printf(
		"제 %d 위원 점수: %d\n\n",turn, comi[no]
		);
	}
	
	printf("******************\n\n");
	
	printf("최고 점수: %d\n\n", maxival);
	printf("최저 점수: %d\n\n", minival);
	
	printf("******************\n\n");
	
	printf("최종 평가 점수: %d\n\n",average);
	
	return 0;
	
}
