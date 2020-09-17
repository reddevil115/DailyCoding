#include <stdio.h>
#include <stdlib.h>

#define MAX 20

 typedef struct NODE
 {
 	int data;
 	struct NODE *link;
 }NODE;
 
 void callUpArray(NODE *head);
 int possibleCheck(int val);
  
 int main(void)
 {
 	int input;
 	int index;
 	int isNotPossible = 1;
 	
 	NODE *p[MAX];
 	NODE *head;
 	
 	head = (NODE *)malloc(sizeof(NODE ));
 	head->link = NULL;
 	
 	for(int i = 0; i < MAX; i++)
 	{
 		p[i] = (NODE *)malloc(sizeof(NODE ));
 	}
 	
 	p[0]->data = 3;
 	p[0]->link = NULL;
 	head->link = p[0];
 	
 	printf("Type 5 numbers\n");
 	
 	callUpArray(head);
 	
 	for(int i = 1; i < 6; i++)
 	{
 	    index = i;
 		
 		printf("No.%d Number: ",index);
 		scanf("%d",&input);
 		
 		p[i]->data = input;
 		p[i]->link = NULL;
 		p[i-1]->link = p[i];
 	}
 	
 	callUpArray(head);
 	
 	while(isNotPossible)
 	{
 		printf(
 		"Enter position for enter element: "
 		);
 		scanf("%d",&index);
 		
 		isNotPossible = possibleCheck(index);
 	}
 	
 	isNotPossible = 1;
 	
 	while(isNotPossible)
 	{
 		printf("Enter new element: ");
 		scanf("%d",&input);
 		
 		isNotPossible = possibleCheck(input);
 	}
 	
 	p[6]->link = NULL;
 	p[5]->link = p[6];
 	
 	for(int i = 7; i >= index; i--)
	{
		p[i]->data = p[i-1]->data;
	}
	
	index--;
	
	p[index]->data = input;
 	
 	callUpArray(head);
 	
 	isNotPossible = 1;
	
	while(isNotPossible)
 	{
 		printf(
 	 "Enter position of enter element to delete: "
 		);
 		scanf("%d",&index);
 		
 		isNotPossible = possibleCheck(index);
 	}
 	
 	index--;
 	
 	if(index == 0)
 	{
 		head->link = p[1];
 		p[0]->link =NULL;
 		free(p[0]);
 	}
 	
 	else if(index > 5)
 	{
 		p[5]-> link = NULL;
 		free(p[6]);
 	}
 	
 	else
 	{
 		p[index-1]->link = p[index+1];
 	    p[index]->link = NULL;
 	}
 	
 	free(p[index]);
 	
 	callUpArray(head);
 	
 	for(int i = 0; i < MAX; i++)
 	{
 		free(p[i]);
 	}
 	
 }
 
 void callUpArray(NODE *head)
 {	
 	NODE *chk = head->link;
 	
 	printf("\nIn List: ");
 	
 	while(!chk == NULL)
 	{
 		printf("%d ",chk->data);
 		chk = chk->link;
 	}
 	
 	printf("\n\n");
 }
 
 int possibleCheck(int val)
 {
 	if(val  < 1)
 	{
 		printf("Enter the number above 0.\n");
 		return 1;
 	}	
 	
 	else
 	{
 		return 0;
 	}
 }
