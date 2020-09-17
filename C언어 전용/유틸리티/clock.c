#include <stdio.h>
#include <Windows/EGL/egl.h>

int main (void)
{
	int i,sec,min;
	
	sec = 0;
	min = 0;
	
	clock:
	
	for(i = 0; i<59; i++)
	{
		sec++;
		sleep(1);
		printf("%dmin %dsec\n",min,sec);
	}
	
		
	if(sec==59)
	
	{
		
		min++;
		
		sleep(1);
		sec = 0;
		
		printf("%dmin %dsec\n",min,sec);
		
		goto clock;	
		
		
	}
	
	return 0;
}
