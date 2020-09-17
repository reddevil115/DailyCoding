#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <Windows/EGL/egl.h>

#define card_max 13;
#define card_type 4;

FILE *fp = NULL;
FILE *fp2 = NULL;

int spectator();
int automatic();
int magic();
int dice_logic();

int option,card_val,cardno,card_tp,dice_1,dice_2;
char card_sym[10];

int main(void)
{
	printf("\t\t\t\t<LOUIS' Dice Story>\n");
	printf("----------------------------------------------------\n");
	printf("Copyright 2018.ZENNON Group all rights reserved.\n"
	);
	printf("----------------------------------------------------\n\n");
	
	while(1)
	{
     	printf("Select Card Select Mode\n\n");
    	printf("1.Select By Spectator\n");
	    printf("2.Select Automatically\n");
	    printf("3.Select Complete\n\n");
	
    	scanf("%d",&option);
		printf("\n");
	
		if(option == 1)
	      {
	      	spectator();
	      	break;
	      }
	    
	    else if(option == 2)
	      {
	      	automatic();
	      	break;
	      }
	    
	    else if(option == 3)
	      {
	      	magic();
	      	break;
	      }
	    
	    else
	      {
	      	printf("Type Again.\n\n");
	      }
	}
	
}

int spectator()
{
	fp = fopen("card_val.txt","w+");
	
	printf("Type Your Card Number\n");
	printf(
	"(Jack = 11 Queen = 12 King = 13)\n\n"
	);
	scanf("%d",&card_val);
	
	cardno = card_val;
	
	printf("\n");
	
	fprintf(fp,"%d",card_val);
	
	fclose(fp);
	
	fp2 = fopen("card_sym.txt","w+");
	
	printf("Type Your Card Type\n");
	printf("(spade,diamond,heart,clover)\n\n");
	scanf("%s%*c",&card_sym);
	printf("\n");
	
	fprintf(fp2,"%s",card_sym);
	
	fclose(fp2);
	
	printf(
	"Your Selection has been completed!\n\n"
	);
	
	printf("Your Card: ");
	printf("%d ",cardno);
	printf("%s\n\n",card_sym);
	
	printf("CAUTION\n\n");
	
	printf("**PLEASE EXIT THE PROGRAM!\n");
	printf(
	"**DO NOT TELL YOUR CARD INFORMATIONS TO MAGICIAN!\n"
	);
	
}

int automatic()
{
	srand((unsigned) time(NULL));
	
	card_val = 1+rand()%card_max;
	cardno = card_val;
	
	card_tp = 1+rand()%card_type;
	
	if(card_tp == 1)
	{
		strcpy(card_sym,"spade");
	}
	
	else if(card_tp == 2)
	{
		strcpy(card_sym,"diamond");
	}
	
	else if(card_tp == 3)
	{
		strcpy(card_sym,"heart");
	}
	
	else
	{
		strcpy(card_sym,"clover");
	}
	
	fp = fopen("card_val.txt","w+");
	fprintf(fp,"%d",card_val);
	fclose(fp);
	
	fp2 = fopen("card_sym.txt","w+");
	fprintf(fp2,"%s",card_sym);
	fclose(fp2);
	
	printf(
	"Magician please turns around back.\n\n"
	);
	
	printf(
	"Automatic selection result will appear\n after 5 second.\n\n"
	);
	
	sleep(1);
	printf("5\n");
	
	sleep(1);
	printf("4\n");
	
	sleep(1);
	printf("3\n");
	
	sleep(1);
	printf("2\n");
	
	sleep(1);
	printf("1\n");
	
	sleep(1);
	printf("\n");
	
	printf("Your Choice: ");
	printf("%d ",cardno);
	printf("%s\n",card_sym);
	
	printf(
	"(Jack = 11 Queen = 12 King = 13)\n\n"
	);
	
	printf("CAUTION\n\n");
	
	printf("**PLEASE EXIT THE PROGRAM!\n");
	printf(
	"**DO NOT TELL YOUR CARD INFORMATIONS TO MAGICIAN!\n"
	);
}

int magic()
{
	fp = fopen("card_val.txt","r+");
	fscanf(fp,"%d",&card_val);
	fclose(fp);
	
	fp2 = fopen("card_sym.txt","r+");
	fscanf(fp,"%s",&card_sym);
	fclose(fp2);
	
	if(strcmp(card_sym,"spade") == 0)
	{
		card_tp = 1;
	}
	
	if(strcmp(card_sym,"diamond") == 0)
	{
		card_tp = 2;
	}
	
	if(strcmp(card_sym,"heart") == 0)
	{
		card_tp = 3;
	}
	
	if(strcmp(card_sym,"clover") == 0)
	{
		card_tp = 4;
	}
	
	printf(
	"Press Enter Key to roll the dice\n\n"
	);
	
	if(card_tp == 1)
	{
		printf("Please roll the first dice.\n");
		scanf("");
		dice_logic();
	}
	
	if(card_tp == 4)
	{
		printf("Please roll the first dice!\n");
		scanf("");
		dice_logic();
	}
	
	if(card_tp == 2)
	{
		printf("Roll the first dice please.\n");
		scanf("");
		dice_logic();
	}
	
	if(card_tp == 3)
	{
		printf("Roll the first dice please!\n");
		scanf("");
		dice_logic();
	}
}

int dice_logic()
{
	if(card_val > 6)
	{
		dice_1 = 4;
	}
	
	if(card_val <= 6)
	{
		dice_2 = 3;
	}
	
	if(card_val == 13)
	{
		dice_1 = 1;
		dice_2 = 1;
	}
	
	if(card_val == 1)
	{
		dice_1 = 1;
	}
	
	if(card_val == 2)
	{
		dice_1 = 2;
	}
	
	if(card_val == 3)
	{
		dice_1 = 3;
	}

	if(card_val == 4)
	{
		dice_1 = 4;
	}
	
	if(card_val == 5)
	{
		dice_1 = 5;
	}
	
	if(card_val == 6)
	{
		dice_1 = 6;
	}
	
	if(card_val == 7)
	{
		dice_2 = 1;
	}
	
	if(card_val == 8)
	{
		dice_2 = 2;
	}
	
	if(card_val == 9)
	{
		dice_2 = 3;
	}
	
	if(card_val == 10)
	{
		dice_2 = 4;
	}
	
	if(card_val == 11)
	{
		dice_2 = 5;
	}
	
	if(card_val == 12)
	{
		dice_2 = 6;
	}
	
	sleep(1);
	
	printf("Your First dice: %d\n\n",dice_1);
	
	printf("Roll the second dice please.\n");
	scanf("");
	
	sleep(1);
	
	printf("Your Second dice: %d\n\n",dice_2);
	
	printf("*Press Enter Key to show up spectator's card \n informations.\n"
	);
	
	scanf("");
	
	printf("*Spectator's card informations are show up \n 5 second after!\n\n");
	
	sleep(1);
	printf("5\n");
	
	sleep(1);
	printf("4\n");
	
	sleep(1);
	printf("3\n");
	
	sleep(1);
	printf("2\n");
	
	sleep(1);
	printf("1\n");
	
	sleep(1);
	printf("\n");
	
	printf("Spectator's Choice: ");
	printf("%d ",card_val);
	printf("%s\n",card_sym);
	printf("(Jack = 11 Queen = 12 King = 13)\n");
}
