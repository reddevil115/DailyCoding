#include <stdio.h>

int get_year();
int calc_yoon_year(int val);

int year, yoonval = NULL;

int main(void)
{
	while(1)
	{
		year = get_year();
		
		if(year > 1999 && year < 3000)
		{
			yoonval = calc_yoon_year(year);
			
			if(yoonval == 0)
			{
				printf("평년입니다.\n\n");
			}
			
			else
			{
				printf("윤년입니다.\n\n");
			}
						
			break;
		}
		
		else
		{
			printf(
			"2000~2999년 사이의 수를 입력하세요.\n\n"
			);
		}
	}
	
	return 0;
}

int get_year()
{
	int yearval;
	
	while(1)
	{
		printf("년도를 입력하세요.\n");
	    scanf("%d",&yearval);
	    printf("\n");
	
		if(yearval > 999)
	    {	 
	    	return yearval;
	    	break;
	    }
	    
	    else
	    {
	    	printf(
	    	"1000이상의 정수를 입력하세요.\n\n"
	    	);
	    }
	}
}

int calc_yoon_year(int val)
{
	if(val % 4 == 0)
	  return 1;
	
	if(val % 4 != 0)
	  return 0;
	
	if(val % 4 == 0 && val % 400 == 0)
	  return 1;
	
	if(val % 4 == 0 && val % 100 == 0)
	  return 0;
}
