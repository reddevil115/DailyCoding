#include <stdio.h>

#define MAX 5
#define ExpVal 3
#define FracVal 2
#define True 1
#define False 0

void eCalculator();
float mCalculator(int boolean);
float e2Decimal(int e);

int expHaveOne = False;

char input[MAX];
int binary[MAX];
int expVal[ExpVal];
int fracVal[FracVal];

int eVal = 0;
float mVal = 0;
float deciEval = 0;
float final = 0;

int main(void)
{
	int isNotComplete = True;
	
	while(isNotComplete)
	{
		printf("Enter the 5bits of binary number: ");
	    scanf("%s",&input);	
	
	    for(int i = 0; i < MAX; i++)
	    {
		    binary[i] = (int)input[i] - 48;
	    }
		
	    for(int i = 0; i < MAX; i++)
	    {
		    if(binary[i] > 1)
		    {
		    	printf("You should only type 0 or 1. \n\n");
		    	break;
		    }
		    
		    else
		    {
		    	isNotComplete = False;
		    }
	    }
	}
	
	for(int i = 0; i < ExpVal; i++)
	{
		expVal[i] = binary[i];	
	}
	
	fracVal[0] = binary[3];
	fracVal[1] = binary[4];
	
	eCalculator();
	mVal = mCalculator(expHaveOne);
	
	if(eVal != 11111 && eVal != 22222)
	{
		deciEval = e2Decimal(eVal);
		
		final = mVal * deciEval;
		
		printf(
		"The floating point is %.3f",final
		);
	}
	
	else if(eVal == 11111)
	{
		printf("The floating point is infinite.");
	}
	
	else
	{
		printf(
		"The floating point is Not a-Number."
		);
	}
	
	return 0;
}

void eCalculator()
{
	int bias = 3;
	int checkE = 0;
	int checkF = 0;
	int result = 0;
	
	for(int i = 0; i < ExpVal; i++)
	{
		if(expVal[i] == 1)
		{
			checkE++;
		}
	}
	
	for(int i = 0; i < FracVal; i++)
	{	
		if(fracVal[i] == 1)
		{
			checkF++;
		}
	}
	
	if(checkE > 0)
	{
		expHaveOne = True;
	}
	
	if(checkE == 3 && checkF == 0)
	{		
		eVal = 11111;
	}
	
	else if(checkE == 3 && checkF != 0)
	{
		eVal = 22222;
	}
	
	else if(checkE > 0 && checkE < 3)
	{
		result = result + expVal[0]*4;
		result = result + expVal[1]*2;
		result = result + expVal[2]*1;
		
		result = result - bias;
		
		eVal = result;
	}
	
	else
	{
		result = 1 - bias;
		
		eVal = result;
	}
}

float mCalculator(int boolean)
{
	float result = 0;
	
	result += fracVal[0]*2;
	result += fracVal[1]*1;
	
	if(boolean == True)
	{
		result += 4;
	}
	
	return result/4;
}

float e2Decimal(int e)
{
	float result = 1;
	
	if(e < 0)
	{
		e = e * -1;
		
		for(int i = 0; i < e; i++)
		{
			result = result * 2;
		}
		
		result = 1 / result;
	}
	
	else
	{
		for(int i = 0; i < e; i++)
		{
			result = result * 2;
		}
	}
	
	return result;
}
