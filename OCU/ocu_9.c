#include <stdio.h>
#include <Windows/EGL/egl.h>

#define max 20

int deco();
int sort_sys();
int rank_sys(int first,int second,int third);
char grade_sys(int val);

int no,stime,sval,addval,rval;
char check, grade;

int *std = &sval;

int main(void)
{
	deco();
	
	for(no = 0; no < max; no++)
	{
		printf(
		"#%d번째 학생 점수를 입력하세요.\n", no +1
		);
		scanf("%d", std + no);
		printf("\n");
	}
	
	printf("입력 정보를 확인합니다.\n\n");
	
	for(no = 0; no < max; no++)
	{
		printf(
		"%d번째 학생 점수: %d\n",no +1 ,*(std + no)
		);
	}
	
	printf("\n");
	printf(
	"입력 정보를 확인 후 정보가 일치할 경우 'Y'를 입력하세요.\n"
	);
	
	scanf("%c",&check);
	printf("\n");
	
	if(check == 'Y'|| check == 'y')
	{
		printf("입력하신 정보가 5초 후 '오름차순'으로 정렬 됩니다.\n\n");
		
		for(no = 0; no < 5; no++)
		{
			printf("%d초\n", 5- no);
			sleep(1);
		}
		
		printf("\n");
	
		sort_sys();
		
		printf("********************성적 분류 결과*******************\n");
		printf(
		"(순위 / 학생 명 / 점수 / 등급 순)\n\n"
		);
		
		for(no = 0; no < max; no++)
	    {
	    	rval = rank_sys(*(std + no), *(std + no + 1), no);
	    	
	    	grade = grade_sys(rval);
	    	
		    printf(
		    "순위: %d/ %d번째 학생 / 점수: %d / 등급:%c\n",rval, no +1 ,*(std + no), grade
		    );
	    }
	}
	
	else
	{
		printf(
		"정보를 처음 부터 다시 입력해 주세요.\n\n"
		);
	}
}

int deco()
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
	int extra;
	
	for(no = 0; no < max - 1; no++)
	{
		for(
		stime = no + 1; stime < max; stime++
		)
		{
			if(*(std + no) > *(std + stime))
			{
				extra = *(std + no);
				*(std + no) = *(std + stime);
				*(std + stime) = extra;
			}
		}
	}
	
	
}

int rank_sys(int first, int second,int third)
{
	int rno = 0;
	
	if(first == second && third != 0)
	{
		rno = max - (third + 1);
	}
	
	else
	{
		rno = max - third;
	}
	
	return rno;
}

char grade_sys(int val)
{
	char gval;
	
	if(val < 5)
	{
		gval = 'A';
	}
		
	else if(val > 4 && val < 10)
	{
		gval = 'B';
	}
		
	else if(val > 9 && val < 15)
	{
		gval= 'C';
	}
		
	else if(val > 14 && val < 18)
	{
		gval = 'D';
	}
		
	else
	{
		gval = 'F';
	}
	
	return gval;
}
