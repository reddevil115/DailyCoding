#include <stdio.h>
#include <stdlib.h>

#define MAX 3

typedef struct Node_
{
	int data;
	struct Node_* ptr;
}node;

void insertNode(node* list, int value);
void freeLinkedList(node* list);
void printList(node* list);

int main()
{
	node* create;
	create = (node*)malloc(sizeof(node));
	create->ptr = NULL; //Should set "NULL" when it begin.

	int value = 0;
	int i = 0;

	printf_s("< Linked List Test > \n\n");

	for (i = 0; i < MAX; i++)
	{
		value = 0;

		printf_s("Type Value: ");
		scanf_s("%d", &value);
		printf_s("\n");

		insertNode(create, value);
		printList(create);
	}

	freeLinkedList(create);

	return 0;
}

void insertNode(node* list, int value)
{
	node* newNode;
	newNode = (node*)malloc(sizeof(node));

	newNode->data = value;
	newNode->ptr = list->ptr;
	list->ptr = newNode;
}

void printList(node* list)
{
	node* p;

	printf_s("In List: {");
	p = list->ptr;

	while (p != NULL)
	{
		printf_s("\"%d\"", p ->data);
		p = p->ptr;

		if (p != NULL)
		{
			printf_s(" , ");
		}
	}

	printf_s("}\n\n");
}

void freeLinkedList(node* list)
{
	node* p;
	
	while (list->ptr != NULL)
	{
		p = list->ptr;
		list->ptr = p->ptr;
		free(p);
		p = NULL;
	}

	printList(list);
	printf_s("Free List Completed!! \n");
}