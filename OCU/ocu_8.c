#include <stdio.h>

#define max 20

int title();
int sort_sys();
int rank_sys();

int stime, turn, no, extra, split;
char grade;

int sdtnum[max];
int rank[max];

int main(void)
{
	title();
	
	for(stime = 0; stime < max; stime++)
	{
		turn ++;
		
		printf(
		"%d번째 학생 점수를 입력하세요.\n",turn
		);
		scanf("%d", &sdtnum[stime]);
		printf("\n");
		
		if(
		sdtnum[stime] < 0 || sdtnum[stime] > 100
		)
		{
			printf(
			"0 ~ 100 사이의 수를 입력하세요.\n"
			);
			printf("\n");
			
			turn --;
			stime--;
		}
	}
	
	sort_sys();
	rank_sys();
	
	printf(
	"***********성적 분류 결과***********\n\n"
	);
	
	printf(
	"  석차  |  학생 명   |  성적  |  등급 \n"
	);
	
	for(stime = 0; stime < max; stime++)
	{
		split++;
		
		no = stime + 1;
		
		if(rank[stime] < 5)
		{
			grade = 'A';
		}
		
		else if(
		rank[stime] > 4 && rank[stime] < 10
		)
		{
			grade = 'B';
		}
		
		else if(
		rank[stime] > 9 && rank[stime] < 15
		)
		{
			grade = 'C';
		}
		
		else if(
		rank[stime] > 14 && rank[stime] < 18
		)
		{
			grade = 'D';
		}
		
		else
		{
			grade = 'F';
		}
		
	    printf(
	    " Rank #%d, student #%d,   %d,      %C\n",rank[stime],no, sdtnum[stime], grade
	    );
		
		if(split == 5)
		{
			printf("\n");
			
			split = 0;
		}
	}
	
	return 0;
}

int title()
{
	printf("<기술 성적 처리 프로그램>\n");
	printf(
	"****************************************************\n");
	
	printf(
	"1 ~ 5등: A, 6 ~ 10등: B, 11 ~ 15등: C\n"
	);
	printf("16등 ~ 18등: D, 19 ~ 20등: F \n");
	
	printf(
	"****************************************************\n\n");
}

int sort_sys()
{
	for(stime = 0; stime < max; stime++)
	{
		for(no = stime + 1; no < max + 1; no++)
		{
			if(sdtnum[no] > sdtnum[stime])
			{
				extra = sdtnum[stime];
				sdtnum[stime] = sdtnum[no];
				sdtnum[no] = extra;
				
			}
		}
	}
}

int rank_sys()
{
	
	for(stime = 0; stime < max; stime++)
	{
		rank[stime] = stime + 1;
	}
	
	for(stime = 0; stime < max; stime++)
	{
		no = stime + 1;
		
		if(sdtnum[no] == sdtnum[stime])
		{
			rank[no] = rank[stime];
		}
	}
}
