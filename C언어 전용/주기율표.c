#include <stdio.h>
#include <string.h>

int inverter();
int dictionary();

int eleno,option;
char element[20];
char check[];

int main(void)
{
	printf("주기울표\n\n");
	
	while(1)
	{
	    printf("검색 방법을 선택하세요.\n\n");
	    printf("1. 원자 이름으로 찾기\n");
	    printf("2. 원자 번호로 찾기\n\n");
	    scanf("%d",&option);
	    printf("\n");
	
	    if(option == 1)
	    {
	    	printf("원자 이름을 입력하세요.\n");
	    	scanf("%s%*c",&element);
	    	printf("\n");
		
	    	eleno = inverter();
		
	    	if(eleno > 0)
		    {
			    dictionary();
			    printf("\n\n");
			    
			    printf(
			    "종료하려면 '종료'를 입력하시고\n계속하시려면 엔터를 눌러주세요.\n\n"
			    );
			    scanf("%s",&check);
			    
			    if(strcmp(element,"종료") == 0)
	           {
	           	  break;
	           }
			    
	    	}
		
	    	else
	    	{
		    	printf("잘못된 접근 입니다.\n\n");
		    	
		    	printf(
			    "종료하려면 '종료'를 입력하시고\n계속하시려면 엔터를 눌러주세요.\n\n"
			    );
			    scanf("%s",&check);
			    
			    if(strcmp(element,"종료") == 0)
	           {
	           	  break;
	           }
	    	}
	    }
	
	     else if(option == 2)
	    {
		    printf("원자 번호를 입력하세요.\n");
		    scanf("%d",&eleno);
		    printf("\n");
		
		    dictionary();
		    printf("\n\n");
	    	
	    	printf(
			    "종료하려면 '종료'를 입력하시고\n계속하시려면 엔터를 눌러주세요.\n\n"
			    );
			    scanf("%s",&check);
			    
			    if(strcmp(element,"종료") == 0)
	           {
	           	  break;
	           }
	    }
	
	     else
	    {
		    printf("목록에 없는 번호 입니다.\n\n");
		    
		    printf(
			    "종료하려면 '종료'를 입력하시고\n계속하시려면 엔터를 눌러주세요.\n\n"
			    );
			    scanf("%s",&check);
			    
			    if(strcmp(element,"종료") == 0)
	           {
	           	  break;
	           }
	    }
    }
}

int inverter()
{
	int balance;
	
	if(strcmp(element,"수소") == 0)
	{
		balance = 1;
		
		return balance;
	}
	
	if(strcmp(element,"헬륨") == 0)
	{
		balance = 2;
		
		return balance;
	}
	
	else
	{
		return 0;
	}
}

int dictionary()
{
	
	if(eleno == 1)
	{
		printf("원소 정보\n\n");
		printf("1. 원소 번호 : 1\n");
		printf("2. 원소 기호 : H\n");
		printf("3. 원소명(국문): 수소\n");
		printf("4. 원소명(영문): Hydrogen\n");
		printf("5. 일반 원자량: 1.008\n");
		printf("6. 표준 원자량: 1.0078, 1.0082\n");
	}
	
	if(eleno == 2)
	{
		printf("원소 정보\n\n");
		printf("1. 원소 번호 : 2\n");
		printf("2. 원소 기호 : He\n");
		printf("3. 원소명(국문): 헬륨\n");
		printf("4. 원소명(영문): Helium\n");
		printf("5. 일반 원자량: -\n");
		printf("6. 표준 원자량: 4.0026\n");
	}
	
	else
		{
			printf("잘못된 접근 입니다.\n");
		}
}
