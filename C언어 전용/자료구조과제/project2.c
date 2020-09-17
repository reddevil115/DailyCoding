#include <stdio.h>
#define MAX 20

void array_callUp();
int possibleCheck(int val);

int numbers[MAX];		
int location;
int *p;

int isNotComplete = 1;
	
int main(void)
{
	int insertNumber;	
	
	printf("Enter 5 Numbers\n\n");
	
	for(int i = 1; i < 6; i++)
	{
		printf("Enter #%d number: ",i);
		scanf("%d",&numbers[i]);		
		
		if(numbers[i] == 0)
		{
			printf("\nEnter Number Above 0\n\n");
			i--;
		}	
				
	}
	
	printf("\n");   	
	array_callUp();
	
	while(isNotComplete)
	{
		printf(
		"Enter position of enter element to delete: "
		);
	    scanf("%d",&location);
	    
	    isNotComplete = possibleCheck(location);
	}	
	
	p = &numbers[location];
	
	for(int i = 0; i < MAX; i++)
	{
		*p = numbers[i];
		
		p = &numbers[i+1];
	}
		
	printf("\n");
	
	array_callUp();
				
}

void array_callUp()
{
	printf("Element in array: ");
	
	for(int i = 0; i < MAX; i++)
	{		
		if(numbers[i] > 0)
		{
			printf("%d ",numbers[i]);
	    }
	}
	
	printf("\n\n");
}

int possibleCheck(int val)
{
	if(val > 0)
	{
		return 0;
	}
	
	else
	{
		printf("\nEnter Number Above 0 \n\n");
		return 1;
	}
}

