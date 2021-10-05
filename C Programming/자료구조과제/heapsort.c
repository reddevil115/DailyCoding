#include <stdio.h>
#include <string.h>

#define true 1
#define false 0
#define ASCII 48
#define MAX 30

int main()
{
	char input[MAX];
	char cut[MAX];
	int numbers[MAX];
	
	int index = 0;
	int check = 0;
	
	for(int i = 0; i < MAX; i++)
	{
	     input[i] = NULL;
		 numbers[i] = 0;
    }
	
    gets(input);
    printf("%s\n",input);
    
    for(int i = 0; i < MAX; i++)
    {
    	if(i == 0)
    	{
    		cut[i] = strtok(input,' ');
        }
        
        else
        { 
        	cut[i] = strtok(NULL,' ');
        }
    }
}
