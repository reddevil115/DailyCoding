#include <stdio.h>

#define max 5
int sort_data();

int a,b,c;

int *aval = &a;

int main(void)
{
	for(a = 0; a < max; a++)
	{
		scanf("%d",*(aval + a));
	}
	
	printf("\n");
	
	sort_data();
	
	for(a = 0; a < max; a++)
	{
		printf("%d\n", *(aval + a));
	}
}

int sort_data()
{
	int i,j,extra;
	
	while(1)
	{
		i = 0;
		j = i + 1;
		
		if(*(aval + i) > *(aval + j))
		{
			*(aval + i) = extra;
			*(aval + i) = *(aval + j);
			*(aval + j) = extra;
			
			i++;
		}
		
		if(i == max)
		{
			break;
		}
	}
}