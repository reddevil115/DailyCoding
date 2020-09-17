#include <stdio.h>
#include <Windows/EGL/egl.h>
#include <time.h>
#include <string.h>

#define max 5

int signal_chck(char signalval[5]);
int roullet_sys();
int numbering_sys();
int title();

char csignal[5];

int n1,n2,n3,signal_desi,error,rtime;

int main(void)
{
	printf("Roullet Game\n\n");
	
	while(1)
	{
		signal_desi = 0;
		csignal[5] = NULL;
		
		title();
		
	    scanf("%s%*c",&csignal);
	    printf("\n");
	
    	signal_desi = signal_chck(csignal);
		
		if(signal_desi == 0)
		{
			numbering_sys();
			
			if(rtime == 5)
			{
				roullet_sys();
			}
		}
		
		else if(signal_desi == 1)
		{
			break;
		}
		
		else if(signal_desi == 2)
		{
			printf("Wrong input! Try again!\n\n");
			
			error = 1;
			sleep(1);
		}
	}
		
}

int title()
{
	if(error == 0)
		{
			printf(
			 "Type enter key to start game!!\n"
			);
			
			printf(
			"If you want end game, type 'end'.\n"
			);
			
			printf("\n");
			
		}
		
	else if(error == 1)
	    {
			printf(
			"Type 'start' to start game!!\n"
			);
			
			printf(
			"If you want end game, type 'end'.\n"
			);
			
			printf("\n");
			
			error = 0;
			
		}
}

int signal_chck(char signalval[5])
{
	if(strcmp(signalval,"end") == 0)
	{
		return 1;
	}
	
	else if(strcmp(signalval, "") == 0)
	{
		return 0;
	}
	
	else if(strcmp(signalval, "start") == 0)
	{
		return 0;
	}
	
	else
	{
		return 2;
	}
	
}

int roullet_sys()
{
    n2 = n1;
    n3 = n1;
	
    rtime = 0;
    
    printf("You win the roullet!\n");
}

int numbering_sys()
{
	srand((unsigned) time(NULL));
	
	n1 = 1 + rand()%max;
	n2 = 1 + rand()%max;
	n3 = 1 + rand()%max;
	
	sleep(1);
	printf("First bullet: %d\n\n",n1);
	
	sleep(1);
	printf("Second bullet: %d\n\n",n2);
	
	sleep(1);
	printf("Last bullet: %d\n\n",n3);
	
	rtime += 1;
	
}
