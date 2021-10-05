#include <stdio.h>
#include <string.h>
#include <time.h>
#include <Windows/EGL/egl.h>
#include <stdlib.h>

#define deci_max 3
#define balance_1st 100000
#define start 100

int deci_sys();
int start_sys();

int i,deci_val, balance,stg_count,start_logic;
int win_count, lose_count,auction_count,start_val;
int user_val,com_val,j;

char round_sig[5];

balance = balance_1st;
start_val = start;
stg_count = 1;
auction_count = 1;

int main(void)
{
	printf("<Let's Auction | Prototype Ver.>\n\n");
	
	printf("Welcome to wonderful place!\n\n");
	
	printf(
	"----------------------------------------------------\n"
	);
	
	printf("<Winning Rule>\n\n");
	printf("## Win 3 of the 5 rounds.\n\n");
	
	printf("<Caution>\n\n");
	
	printf(
	"1. If you lost all your balance you will be lose.\n"
	);
	printf(
	"2. If you lose over 3 rounds you will be lose. \n");
	
	printf(
	"----------------------------------------------------\n"
	);
	
	for(i = 0; i < 1; i++)
	{
		start_logic = start_sys();
		
		if(
		start_logic == 0 && win_count < 3 || lose_count < 3
		)
		{
			printf("Round %d\n\n",stg_count);
			printf(
			"#%d item Auction\n\n",stg_count
			);
			
			printf(
			"*Start Balance: %d\n\n",start_val
			);
			
			printf(
			"*Your Balance: %d\n\n",balance
			);
			
			printf(
			"Win stage count: %d\n\n",win_count
			);
			
			printf(
			"Lose stage count: %d\n\n",lose_count
			);
			
			printf(
			"# Your #%d bid #\n\n",auction_count
			);
			
			for(j = 0; j < 1; j++)
			{
				printf(
			    "How much cash do you want bid?\n"
		       	);
			    
			    scanf("%d",&user_val);
			    printf("\n");
			    
			    if(user_val < start_val)
			    {			    	
			    	printf(
			    	"Type more higher!\n\n"
			    	);
			    	
			    	j--;
			    	
			    	sleep(1);
			    }
			}
			
			printf(
			"Your bid: %d point\n\n",user_val
			);
			printf("Now com's turn\n\n");
			
			printf(
			"Com 's #%d bid\n\n",auction_count
			);
			
			com_val = deci_sys();
			
			if(com_val == 1)
			{
				com_val = user_val + user_val*0.2;
			}
			
			else if(com_val == 2)
			{
				com_val = user_val*2;
			}
			
			else
		    {
		    	com_val = 0;
		    }
		    
		    sleep(1);
		    printf("Com is considering now!\n\n");
		    
		    sleep(1);
		    printf(
		    "Com's bid: %d point\n\n",com_val
		    );
		    
		    if(user_val > com_val)
		    {
		    	i--;
		    	win_count++;
		    	start_val = start;
		    	auction_count = 1;
		    	balance -= user_val;
		    	
		    	printf(
		    	"You win the #%d auction\n\n",stg_count
		    	);
		    	
		    	stg_count++;
		    }
		    
		    else if(user_val == 0)
		    {
		    	i--;
		    	lose_count;
		    	start_val = start;
		    	auction_count = 1;
		    	balance -= com_val;
		    	
		    	printf(
		    	"You lose the #%d auction\n\n",stg_count
		    	);
		    	
		    	stg_count++;
		    }
		    
		    else
		    {
		    	auction_count++;
		    	i--;
		    	start_val = com_val + 1;
		    }
		    
		    printf(
		    "If you want quit type 'stop'\n" 
		    );
		    printf("If not press enter key\n");
		    
		    scanf("%s",round_sig);
		    printf("\n");
		    
		    if(strcmp(round_sig,"stop") == 0)
		    {
		    	i++;
		    }
		}
		
		else
		{
			printf("Type again!\n");
			i--;
			sleep(1);
		}
	}
}

int deci_sys()
{
	int deci_no;
	
	srand((unsigned) time(NULL));
	
	deci_no = 1 + rand()%deci_max;
	
	return deci_no;
}

int start_sys()
{
	char order[10];
	
	printf("\n");
	printf(
	"Type 'start' if you want start round!\n"
	);
	
	scanf("%s%*c",&order);
	printf("\n");
	
	if(strcmp(order,"start") == 0)
	{
		return 0;
	}
	
	else
	{
		return 1;
	}
}
