#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<Windows/EGL/egl.h>

#define Time 100

int main(void)
{
	srand((unsigned )time(NULL));
	int A, B= rand()%Time+1,i;
	
	while(1)
	{
	   printf("Type your number: ");
	   scanf("%d",&A);
	   printf("\n");
	  
	  if(A==B)
	  {
	   printf("\nCorrect!\n");
	   sleep(1);
	   printf("%d",B);
	  
	   break;
	  }
	  
	  if(A>B)
	  {
	  	printf("It's too high");
	  	printf("\n\n");
	  }
	  
	  if(A<B)
	  {
	  	printf("It's too low");
	  	printf("\n\n");
	  }
	  
	}
	
	
}
