#include <stdio.h>

#define max 5

int sort_sys();

int no,val;
int *array = &val;

int main(void)
{
	printf("값을 넣어주세요.\n");
	
	for(no = 0; no < max; no++)
	{
		scanf("%d",array + no);
		printf("\n");
	}
	
	for(no = 0; no < max; no++)
	{
		printf("%d,%d\n",no +1 ,*(array + no));
	}
	
	sort_sys();
	printf("\n");
	
	for(no = 0; no < max; no++)
	{
		printf("%d,%d\n",no +1 ,*(array + no));
	}
}

int sort_sys()
{
	int a,b,extra;
	
	for(a = 0 ; a < max - 1; a++)
	{
		for(b = a + 1; b < max; b++)
		{
			if(*(array + a) > *(array + b))
			{
				extra = *(array + a);
				*(array + a) = *(array + b);
				*(array + b) = extra;
			}
		}
	}
}
