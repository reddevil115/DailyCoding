#include <stdio.h>
#include <stdlib.h>

typedef struct NODE
{
	int data;
	struct NODE *link;
}NODE;

int main(void)
{
	NODE *head;
	head = (NODE *)malloc(sizeof(NODE));
	
	head -> link = NULL;
	
	NODE *p1;
	p1 = (NODE *)malloc(sizeof(NODE));
	
	p1->data = 10;
	p1->link = NULL;
	head->link = p1;
	
	NODE *p2;
	p2 = (NODE *)malloc(sizeof(NODE));
	
	p2->data = 20;
	p2->link = NULL;
	p1->link = p2;
	
	NODE *p3;
	p3 = (NODE *)malloc(sizeof(NODE ));
	
	p3->data = 30;
	p3->link = NULL;
	p2->link = p3;
	
	NODE *chk = head->link;
	
	while(chk != NULL)
	{
		printf("%d ",chk->data);
		chk = chk->link;
	}
	
	free(head);
	free(p1);
	free(p2);
	free(p3);
}
