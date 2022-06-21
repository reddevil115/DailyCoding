#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows/EGL/egl.h>

#define MAX 45

int main(void)
{
	int i;
	
	
	srand((unsigned )time(NULL));
	
	for(i=0; i<6; i++)
	{
		sleep(1);
		printf("%d\n",1+rand()%MAX);
		
	}
	
	return 0;
}
