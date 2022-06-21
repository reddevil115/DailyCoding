#include <stdio.h>
#define True 1
#define False 0
#define MAX 8

void binaryCalculator(int val);
void andLogic(int bitA, int bitB,int index);
void orLogic(int bitA, int bitB,int index);
void xorLogic(int bitA, int bitB,int index);
void notLogic(int bitA, int bitB,int index);

int completeA = False;

int binaryA[MAX];
int binaryB[MAX];

int andResult[MAX];
int orResult[MAX];
int xorResult[MAX];

int notBinaryA[MAX];
int notBinaryB[MAX];

int main(void)
{
	unsigned inputA;
	unsigned inputB;
	
	printf("Enter the unsigned number #1: ");
	scanf("%d",&inputA);
	
	printf("Enter the unsigned number #2: ");
	scanf("%d",&inputB);
	
	binaryCalculator(inputA);	
	
	for(int i = 0; i < MAX; i++)
	{
		binaryB[i] = 0;
	}
	
	binaryCalculator(inputB);
	
	printf("%d Binary: ",inputA);
	
	for(int i = 0; i < MAX; i++)
	{
		printf("%d",binaryA[i]);
	}
	
	printf("\n");
	printf("%d Binary: ",inputB);
	
	for(int i = 0; i < MAX; i++)
	{
		printf("%d",binaryB[i]);
	}
	
	for(int i = 0; i < MAX; i++)
	{
		int bitA = binaryA[i];
		int bitB = binaryB[i];
		
		andLogic(bitA, bitB, i);
	}
	
	printf("\n");
	printf("AND Logic: ");	
	for(int i = 0; i < MAX; i++)
	{
		printf("%d",andResult[i]);
	}
	
	for(int i = 0; i < MAX; i++)
	{
		int bitA = binaryA[i];
		int bitB = binaryB[i];
		
		orLogic(bitA, bitB, i);
	}
	
	printf("\n");
	printf("OR Logic: ");	
	for(int i = 0; i < MAX; i++)
	{
		printf("%d",orResult[i]);
	}
	
	for(int i = 0; i < MAX; i++)
	{
		int bitA = binaryA[i];
		int bitB = binaryB[i];
		
		xorLogic(bitA, bitB, i);
	}
	
	printf("\n");
	printf("XOR Logic: ");	
	for(int i = 0; i < MAX; i++)
	{
		printf("%d",xorResult[i]);
	}
	
	for(int i = 0; i < MAX; i++)
	{
		int bitA = binaryA[i];
		int bitB = binaryB[i];
		
		notLogic(bitA, bitB, i);
	}
	
	printf("\n");
	
	printf("%d Not Logic: ",inputA);	
	for(int i = 0; i < MAX; i++)
	{
		printf("%d",notBinaryA[i]);
	}
	
	printf("\n");
	
	printf("%d Not Logic: ",inputB);	
	
	for(int i = 0; i < MAX; i++)
	{
		printf("%d",notBinaryB[i]);
	}
	
	return 0;	
}

void binaryCalculator(int val)
{	
	int indexA = 0;
	int indexB = 0;
	int indexC = 0;
	int quot = val;
	int remain[MAX];
	int complete[MAX];
	
	for(int i = 0; quot >= 1; i++)
	{
		remain[i] = quot % 2;
		quot = quot / 2;	
		
		indexA++;
	}	
	
	indexA--;
	indexC = MAX - (indexA + 1);
	
	while(indexA >= 0)
    {
		complete[indexB] = remain[indexA];
		indexB++;
		indexA--;
	}
	
	indexA = 0;
	
	if(completeA == False)
	{
		while(indexC <= MAX)
		{
			binaryA[indexC] = complete[indexA];
			indexA++;
			indexC++;
		}						
	}
	
	else if(completeA == True)
	{
		while(indexC <= MAX)
		{
			binaryB[indexC] = complete[indexA];
			indexA++;
			indexC++;
		}					
	}
	
	completeA = True;
}

void andLogic(int bitA,int bitB,int index)
{
	if(bitA == 1 && bitB == 1)
	{
		andResult[index] = 1;
	}
	
	else
	{
		andResult[index] = 0;
	}
}

void orLogic(int bitA, int bitB,int index)
{
	if(bitA == 1 || bitB == 1)
	{
		orResult[index] = 1;
	}
	
	else
	{
		orResult[index] = 0;
	}
}

void xorLogic(int bitA, int bitB,int index)
{
	if(bitA == 1 && bitB == 0 || bitA == 0 && bitB == 1)
	{
		xorResult[index] = 1;
	}
	
	else if(bitA == 1 && bitB == 1)
	{
		xorResult[index] = 0;
	}
	
	else
	{
		xorResult[index] = 0;
	}
}

void notLogic(int bitA, int bitB,int index)
{
	if(bitA == 1)
	{
		notBinaryA[index] = 0;
	}
	
	else
	{
		notBinaryA[index] = 1;
	}
	
	if(bitB == 1)
	{
		notBinaryB[index] = 0;
	}
	
	else
	{
		notBinaryB[index] = 1;
	}
}
