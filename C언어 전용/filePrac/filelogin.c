#include<stdio.h>
#include <string.h>

FILE*fid,*fpw = NULL;

int mode(void);
int login(void);
int join(void);

int a;

int main(void)
{
	
	mode();
	
	scanf("%d",&a);
	printf("\n");
	
	if(a == 1)
	{
		login();
	}
	
	else if(a == 2)
	{
		join();
	}
	
	else
	{
		printf("Good Bye!!\n\n");
	}
}

int mode(void)
{
	printf("Select Mode\n");
	printf("====================================================\n");
	
	printf("1.log in\n");
	printf("2. join\n");
	
	printf("====================================================\n");
}

int login(void)
{
	char id[10];
	char id_check[10];
	int result,pw,pw_check;
	
	fid = fopen("ID","r");
	fpw = fopen("PW","r");
	
	fscanf(fid,"%s",id_check);
	fscanf(fpw,"%d",pw_check);
	
	fclose(fid);
	fclose(fpw);
	
	for(a = 0; a<1; a++)
	{
		printf("Type ID: ");
	    scanf("%s%*c",&id);
	    printf("\n");
	    
	    result = strcmp(id,id_check);
	    
	    if(result == 0)
	    {
	    	printf("Type PW: ");
	    	scanf("%d",&pw);
	    	printf("\n");
	    	
	    	if(pw == pw_check)
	    	{
	    		printf("Log In Success!\n");
	    		break;
	    	}
	    	
	    	else
	    	{
	    		printf(
	    		"Check your information.\n\n"
	    		);
	    	}
	    	
	    }
	    
	    else if(id == "stop")
	    {
	    	break;
	    }
	    
	    else
	    {
	    	printf(
	    	"Check your information .\n"
	    	);
	    	
	    	printf(
	    	"If you didn't join, log in after join.\n\n"
	    	);
	    }
	}
	
}

int join(void)
{
	char id[10];
	int pw;
	
	fid = fopen("ID","w");
	fpw = fopen("PW","w");
	
	printf("Type your ID: ");
	scanf("%s%*c",id);
	printf("\n");
	
	printf("Type your PW: ");
	scanf("%d",&pw);
	printf("\n");
	
	printf(
	"Welcome! Please restart program and log in!"
	);
	
	fputs(id,fid);
	fputc(pw,fpw);
	
	fclose(fid);
	fclose(fpw);
}
