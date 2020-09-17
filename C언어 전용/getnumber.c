#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define MAX 5

int numbers[5];
char stop[] = ("stop");
char STOP[];

int i,result;

void stopcheck();

int main(void)
{
	numbers[0] = 1;
	numbers[1] = 2;
	numbers[2] = 3;
	numbers[3] = 4;
	numbers[4] = 5;
	
	while(1)
	{
	
	    srand((unsigned ) time(NULL));
	    i = 0+rand()%MAX;
	
		printf("Get number: ");
	    printf("%d\n",numbers[i]);
		scanf("%s\n",&STOP);
		
		stopcheck();
		
		if (result == 0)
		break;
	}
	
	return 0;
}

void stopcheck()
{
	result = strcmp(stop,STOP);
}
