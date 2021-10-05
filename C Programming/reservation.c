#include <stdio.h>
#include <string.h>
#include <time.h>

#define no 10

int seatview();

int a[no] = {0};

int i;
char b;

int main(void)
{
	printf("Do you want make a reservation? ");
	printf("(y or n)\n");
	
	scanf("%c",&b);
	
	if( b == "y" )
	{
        for(i = 0; i < no; i++)
	    {
	    	printf("%d",a[i]);
	        printf(" ");
	    }
	}
	
	else
	{
		printf("bye \n");
	}
	
}

int seatview()
{

}
