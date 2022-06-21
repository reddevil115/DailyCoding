//전처리기 
#include <stdio.h>
#include <stdlib.h>
#include <Windows/EGL/egl.h>
#include <time.h>

//define값
#define MAX 100
#define KEY 0000

//변수 선언
int x,y,z,i,key=1;

//메인 함수 선언
int main(void)
{
	//프로그램 타이틀
	printf("<Lottery System>\n");
	printf(
	"----------------------------------------------------\n");
	printf(
    	"*If you want get your number automatically type '0' \n" );
    printf("*If you want decide number yourself type your number\n");
    printf("(Range:1~100,Win Rate:1%%)\n");
	    
	printf(
	"----------------------------------------------------\n");
	
	//for 문으로 반복문 시작 변수 i에 1을 증가시킨다. 나중에 1을 초기화 시키는 것으로 반복문 조절. for문 해석: 
	//i에 0을 대입하고 i가 1보다 작을 때 까지 반복하되 시작하면서 i에 있는 값에 1을 더하라.
    for(i=0; i<1; i++)
    {	
    	//난수 부여
    	srand((unsigned)time(NULL));
        x= 1+rand()%MAX;
	    y= 1+rand()%MAX;
	    
    	printf("\nType number: ");
    	scanf("%d\t\n",&z);
    	
    	//자동 난수 부여 시스템
    	if(z==0)
    	{
    		printf("\nYour number is: %d\n",x);
    		printf(
    		"The winning number is: %d\n",y);
    		
    		if(x==y)
    		{
    			printf("\nYou Win the lottery\n");
    		}
    		
    		else
    		{
    			printf("\nYou fail\n");
    		}
    		
    				
    	}
    	
    	//수동 난수 부여 시스템
    	if(z>0)
    	{
    		printf("\nYour number is: %d\n",z);
    		printf("The winning number is: %d",y);
    		
    		if(z==y)
    		{
    			printf("\nYou Win the lottery\n");
    		}
    		
    		else
    		{
    			printf("\nYou fail\n");
    		}
    	}
    	
    	
    	//초기화 시스템
    	printf(
    	"\nIf you want try again type '0000'\n");
    	scanf("%d\t\n",&key);
    	
    	//초기화 시스템 핵심 변수 i에 증가된 1을 초기화 시킨다.
    	if(key==KEY)
    	{
    		i--;
    		key+=1;
    	}
    	
    	
    }
    
    
}
