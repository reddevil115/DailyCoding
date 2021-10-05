#include <stdio.h>
#include <time.h>
#include <Windows/EGL/egl.h>
#include <string.h>

#define downno 10;
#define point 0;

int number,ctdw,i,ctdsystem,pointval;

int main(void)
{
	i = 0;
	ctdw = downno;
	pointval = point;
	
	printf(
	"This is a #%d countdown program\n",ctdw);
	printf("\n");
	printf("Start!\n");
	printf("\n");
	
	sleep(1);
	
	for(number = pointval; number < ctdw + 1; number++)
	{
		
		ctdsystem = ctdw - i;
		printf("%d\n",ctdsystem);
		
		i++;
		
		sleep(1);
	}
	
	printf("\n");
	printf("The End\n");
}
