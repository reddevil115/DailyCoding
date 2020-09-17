#include <stdio.h>
#include <stdlib.h>

#define MAX 20

typedef struct NODE
 {
 	int data;
 	struct NODE *link;
 }NODE;
 
 int main(void)
 {
 	int input,index;
 	
 	NODE *p[MAX];
 	
 	for(int i = 0; i < MAX; i++)
 	{
 		p[i] = (NODE *)malloc(sizeof(NODE ));
 	}
 	
 	p[0]->link = NULL;
 	
 	printf("Type 5 numbers\n\n");
 	
 	for(int i = 1; i < 6; i++)
 	{
 	    index = i;
 		
 		printf("No.%d Number: ",index);
 		scanf("%d",&input);
 		
 		p[i]->data = input;
 		p[i]->link = NULL;
 		p[i-1]->link = p[i];
 	}
 	
 	printf("\nIn List: ");
 	
 	NODE *chk = p[0]->link;
 	
 	while(!chk == NULL)
 	{
 		printf("%d ",chk->data);
 		chk = chk->link;
 	}
 	
 	for(int i = 0; i < MAX; i++)
 	{
 		free(p[i]);
 	}
 	
 }
