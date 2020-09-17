//전처리기(헤더파일)
#include<stdio.h>
#include <string.h>

//비밀번호 값 정의
#define PW 1234

//ID,PW를 확인하기 위한 함수 정의
char idcheck(int idcheck);
int  pwcheck(int pwcheck);
char cdcheck(int cdcheck);

//배열 선언, ID값에 아이디 값 설정, CD는 Code의 약자
//Code 값으로 로그 아웃을 한다.
char ID[]=("simple");
char id[];
char CD[]=("quit");
char cd[];

//변수 선언타이틀
int pw,result,i;

//메인 함수 시작
int main(void)
{
	//프로그램 타이틀
	printf("Log in system use function\n");
	printf(
	"****************************************************\n");
	
	printf(
	     "Type your ID and PW for Log In\n\n"
	      );
	printf("ID: simple\n");
	printf("PW: 1234\n");
	
	printf(
	"****************************************************\n");
	
	//로그 아웃을 위한 연산자, i가 0과 같고 
	//1보다 작을 때 i에 1만큼 증가 시켜라.
	//Code 값이 입력 됐을 때 i값을 초기화 한다.
	for(i=0;i<1;i++)
	{
	
		//ID값을 입력 받고 확인한다. 
	  while(1)
	  {
		printf("\nType your ID: ");
		scanf("%s\t\n",&id);
		
		idcheck(id);
		
		if(result == 0)
	      break;
	
	   else
	      printf("Check your ID again.\n");
	  }
	
	  //PW값을 입력 받고 확인한다.
	  while(1)
	  {
		printf("\nType your PW: ");
		scanf("%d\t\n",&pw);
		
		pwcheck(pw);
		
		if(result == 1)
		{
		 printf("Log in Success!\n");
		 result=NULL;
		 break;
		}
		
		else
		{
			printf("Check your PW again.\n");
		}
		
	  }
	  
	  //로그 아웃을 하기 위한 절차
	  printf(
	         "\nIf you want Log Out type 'quit'\n"
	        );
	  scanf("\n%s\t\n",&cd);
	  
	  cdcheck(cd);
	  
	  if(result==0)
	  {
	  	printf("Log out Success!\n");
	  	
	  	//모든 값을 초기화 한다.
	  	char id = NULL,cd = NULL;
	  	int result = 2;
	  	pw -= 1234;
	  	i -= 1;	 
	  }
	  
	}
}

//idcheck 함수, 입력 받은 ID와 저장된 ID가
//같은지 확인하고 같으면 result에 0을 대입한다.
char idcheck(int idcheck)
{
	result = strcmp(id,ID);	
}

//pwcheck 함수, 입력 받은 PW와 저장된 PW가
//같은지 확인하고 같으면 result 값을 1 증가 시킨다.
int pwcheck(int pwcheck)
{
	if(pw == PW)
	   result+=1;
}

//cdcheck 함수, 입력 받은 CD와 저장된 CD가 같은지
//확인하고 같으면 result에 0을 대입한다.
char cdcheck(int cdcheck)
{
	result = strcmp(cd,CD);
}
