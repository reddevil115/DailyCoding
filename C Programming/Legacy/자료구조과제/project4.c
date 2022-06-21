#include <stdio.h>
#include <stdlib.h>

#define MAX 20
#define True 1
#define False 0

void menu();

int isMenuActive = True;
int activePush = True;

typedef struct NODE
 {
 	int data;
 	struct NODE *next;
 	struct NODE *last;
 }NODE;

int main(void)
{
	int menuSelect = 0;
	int deleteCount =0;
	int index = 0;
	int peek = 0;
	int findVal = 0;
	
	char pushDecide = NULL;
	
	NODE *numbers[MAX];	
	
	for(int i = 0; i < MAX; i++)
	{
		numbers[i] = (NODE *)malloc(sizeof(NODE ));
	}
	
	NODE *stack;
	stack = (NODE *)malloc(sizeof(NODE ));
	stack-> data = NULL;
	
	NODE *head;
	head = (NODE *)malloc(sizeof(NODE ));
	head->next = numbers[0];
	
	NODE *tail;
	tail = (NODE *)malloc(sizeof(NODE ));
	tail->last = numbers[0];
	
	while(isMenuActive)
	{
		menu();
		printf("Enter Your Choice: ");
		scanf("%d",&menuSelect);
		printf("\n");
		
		if(menuSelect == 1)
		{
			menuSelect = 0;			
			
			while(activePush)
			{	
					    
			    printf("Enter Element in stack: ");
			    scanf("%d",&stack->data);
			    printf("\n");					
			
				printf("Pushed an element (Y/N): ");
			    gets(pushDecide);
			    printf("\n");
			
			    if(pushDecide =='Y'||pushDecide =='y')
			    {
				    peek = index;
				    numbers[index]->data= stack->data;
				    numbers[index]->next= NULL;
				    if(index == 0)
				    {
				    	numbers[0]->next=NULL;
				    	numbers[0]->last=NULL;
				    }
				    
				    else
				    {
				    	numbers[index-1]->next= 
				        numbers[index];
				        numbers[index]->last= 
				        numbers[index-1];
				    }
				    
				    tail->last = numbers[index];
				
				    index++;			    
			    }
			    
			    else if(pushDecide =='N'||pushDecide =='n')
			    {
			    	activePush = False;
			    }
			    
			    else
			    {
			    	printf("You can only enter Y or N.\n");
			    	printf("Check your input.\n\n");
			    }
			}	        
								
		}
		
		else if(menuSelect == 2)
		{
			menuSelect = 0;
			activePush = True;
			
			printf("Delete data is: ");
			scanf("%d",&stack->data);
			printf("\n");
			
			NODE *find = head->next;
			
			while(!find == NULL)
			{
				if(find->data == stack->data)
				{
					peek = findVal-1;
					index = peek + 1;
					
					if(peek <= 0)
					{
						tail->last= NULL;
						head->next= NULL;
					}
					
					else
					{
						tail->last= numbers[peek];
					    numbers[index]->last=NULL;
			            numbers[peek]->next=NULL;
			        }
					
					break;
				}
				
				findVal++;
				find= find->next;
			}			
		}
		
		else if(menuSelect == 3)
		{
			menuSelect = 0;
			activePush = True;
			stack = NULL;
			
			NODE *print = tail->last;
			
			while(!print == NULL)
			{
				printf("%d\n",print->data);
				//printf("%d\n",index);
				print = print->last;
			}
			printf("\n");
		}
		
		else if(menuSelect == 4)
		{
			menuSelect = 0;
			isMenuActive = False;
		}
		
		else
		{
			printf("Selection Range is 1 to 4.\n");
			printf("Check Your Number. \n\n");
		}
	}
	
	return 0;
}

void menu()
{
	printf("1: push\n");
	printf("2: pop\n");
	printf("3: display\n");
	printf("4: exit\n\n");
}
