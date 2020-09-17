#include<stdio.h>
#include <string.h>

FILE*fp = NULL;

int deposit_sys(void);
int withdraw_sys(void);
int check_balance(void);
int key_cmp(void);

int cash,option,i,key_result;

char key[];

int main(void)
{
	for(i = 0; i<1; i++)
	{
		printf("Select Mode\n\n");
	    printf("1.Deposit\n");
	    printf("2.Withdraw\n");
	    printf("3.Check balance\n\n");
	
	    scanf("%d",&option);
	    printf("\n");
	
	    if(option == 1)
	    {
		    deposit_sys();
	    }
	
	    if(option == 2)
	    {
		    withdraw_sys();
	    }
	
	    if(option == 3)
	    {
		    check_balance();
	    }
	    
	    printf("\n");
	    printf(
	    "If you want to do other thing type 'return'.\n"
	    );
	    printf(
	    "If you want to quit type 'quit'.\n"
	    );
	    
	    scanf("%s%*c",&key);
	    printf("\n");
	    
	    key_result = key_cmp();
	    
	    if (key_result == 1)
	       i--;
	        
	}	
}

int deposit_sys(void)
{
	int amount,balance;
	
    fp = fopen("Banking_information.txt","r");
	
	fscanf(fp,"%d",&amount);
	
	fclose(fp);
	
	fp = fopen("Banking_information.txt","w+");
	
	printf(
	"How much cashes do you want to deposit?\n"
	);
	
	scanf("%d",&cash);
	printf("\n");
	
	cash += amount;
	
	fprintf(fp,"%d",cash);
	
	fclose(fp);
	
	fp = fopen("Banking_information.txt","r");
	
	fscanf(fp,"%d",&balance);
	
	printf("Now your balance: %d\n\n",balance);
	
	fclose(fp);
	
}

int withdraw_sys(void)
{
	int amount,balance,verify;
	
    fp = fopen("Banking_information.txt","r");
	
	fscanf(fp,"%d",&amount);
	
	fclose(fp);
	
	fp = fopen("Banking_information.txt","w+");
	
	printf(
	"How much cashes do you want to withdraw?\n"
	);
	
	scanf("%d",&cash);
	printf("\n");
	
	if(cash <= amount)
	   {
	   	amount -= cash;
	   	cash = amount;  
	   	verify = 1;
	   }
	
	else
	   {
	   	printf(
	    "Too law balance to withdraw cash.\n"
	       );
	    verify = 0;
	    }
	    
	cash = amount;      
	fprintf(fp,"%d",cash);
	fclose(fp);
	
	fclose(fp);
	
	fp = fopen("Banking_information.txt","r");
	
	fscanf(fp,"%d",&balance);
	
	fclose(fp);
	    
	if(verify == 1)
	{
		printf(
		"Now your balance: %d\n\n",balance
		);
    }

    else
       printf("Check your balance.\n\n"); 
}

int check_balance(void)
{
	int amount;
	
    fp = fopen("Banking_information.txt","r");
	
	fscanf(fp,"%d",&amount);
	
	fclose(fp);
	
	printf("Your balance: %d\n",amount);
}

int key_cmp(void)
{
	int a;
	
	a = strcmp(key,"return");
	
	if(a == 0)
	return 1;
	
	else
	return 0;
}
