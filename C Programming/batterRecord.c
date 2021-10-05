#include<stdio.h>
#include<string.h>

#define MAX 10

int i;

int number[];
char name[];
char position[];
	
int main(void)
{
	
	for(i=0;i<MAX-1;i++)
	{
	  
	  printf(
	  "Type batter's batting order number: "
	  );
	  scanf("%d%*c\t\n",&number[i]);
	  printf("\n");
	  
	  printf("Type batter's name: ");
	  scanf("%s%*c\t\n",&name[i]);
	  printf("\n");
	  
	  printf("Type batter's position: ");
	  scanf("%s%*c\t\n",&position[i]);
	  printf("\n");
	    
	}
	
	printf("Batting Order\n");
	
	for(i=0; i<MAX-1; i++)
	{
		printf("%d",number[i]);
		printf("%s",name[i]);
		printf("%s\n",position[i]);
	}
}
