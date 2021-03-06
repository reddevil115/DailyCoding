﻿#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 3

FILE*fp;
	
char position();
char goalk();
char mov();

char loc,result,kickpo,goalpo;
int number,number_2,i,chance = 1,
    user_save = 0, com_save = 0,
    score_user = 0,score_com = 0,
    point,betpoint,charge;


int main(void)
{
	printf("PK Game\n\n");
	printf(
	"----------------------------------------------------\n"
	);
	
	printf("<Game information>\n\n");
	
	printf(
	"Type only 'l','L','c','C','r' or 'R'.\n\n"
	);
	
	printf("'l' and 'L' means 'Left'.\n");
	printf("'c' and 'C' means 'Center'.\n");
	printf("'r' and 'R' means 'Right'.\n");
	
	printf(
	"----------------------------------------------------\n\n"
	);
	
	fp = fopen("point_manager.txt","r");
	fscanf(fp,"%d",&point);
	fclose(fp);
	
	fp = fopen("point_manager.txt","r");
	fscanf(fp,"%d",&charge);
	fclose(fp);
	
	if(point > 0)
	{
		fp = fopen("point_manager.txt","r");
	    fscanf(fp,"%d",&point);
	    fclose(fp);
	    
		printf("Your point: %d\n\n",point);
		
		printf(
		"How much point do you want to bet?\n"
		);
		scanf("%d",&betpoint);
	    printf("\n");
	    
	    printf("You bet %d point.\n\n",betpoint);
	    
	    point -= betpoint;
	    
	    printf("Now your point: %d\n\n",point);
	    
	    
		
       for(i = 0; i < 5; i++)
       {
   	      srand((unsigned ) time(NULL));
   	  
   	      number = -1 + rand()%MAX;
   	      number_2 = -1 + rand()%MAX;
   	  
   	      printf("#%d KICK\n",chance);
   	  
   	      printf("Where do you want to shoot?: ");
   	      scanf("%c%*c\n",&loc);
   	      printf("\n");
   	  
   	      result = position();
   	      kickpo = mov();
   	  
   	      if(result == kickpo)
   	      {
   	   	    printf("No goal!\n");
   	   	    com_save++;
   	      }
   	  
   	      else
   	      {
   	        printf("Goal!!!!!!!\n");
   	        score_user++;
   	      }
   	  
   	      printf("\n");
   	      printf("Your Shoot: %c\n",kickpo);
   	      printf("Goalkeeper move: %c\n",result);
   	      printf("\n");
   	      printf(
   	      "You %d : %d COM\n",score_user,score_com
   	      );
   	      printf("\n");
   	  
   	      printf("Where do you want to move?: ");
   	      scanf("%c%*c\n",&loc);
   	  
   	      result = goalk();
   	      goalpo = mov();
   	  
   	      if(result == goalpo)
   	      {
   	         printf("\n");
   	         printf("Super Save!!!!!!!!!\n");
   	         user_save++;
   	      }
   	  
   	      else
   	      {
   	  	    printf("\n");
   	  	    printf("Goal!\n");
   	  	    score_com++;
   	      }
   	  
   	      printf("\n");
   	      printf("Your move: %c\n",goalpo);
   	      printf("Kicker shoot: %c\n",result);
     	  printf("\n");
    	  printf(
    	  "You %d : %d COM\n",score_user,score_com
    	  );
    	  printf("\n");
   	  
    	  if(chance >= 5 && score_user > score_com)
   	      {
        	  printf("You Win!!!!!!!\n\n");
        	  point = (charge + betpoint)+ 
        	      (betpoint * 0.2);
        	  
        	  fp = fopen("point_manager.txt","w");
        	  
        	  fprintf(fp,"%d",point);
        	  
        	  fclose(fp);
        	  
        	  fp = fopen("point_manager.txt","r");
        	  fscanf(fp,"%d",&point);
        	  fclose(fp);
        	  
        	  printf(
        	 "Now your point: %d\n",point
   	      	  );
          }
   	  
    	  else if(
    	  chance >= 5 && score_user < score_com
    	  )
          {
        	  printf("You lose.\n\n");
        	  
        	  fp = fopen("point_manager.txt","w");
        	  
        	  fprintf(fp,"%d",point);
        	  
        	  fclose(fp);
        	  
        	  fp = fopen("point_manager.txt","r");
        	  fscanf(fp,"%d",&point);
        	  fclose(fp);
        	  
        	  printf(
        	 "Now your point: %d\n",point
   	      	  );
          }
   	  
    	  else if(
    	  chance >= 5 && score_user == score_com
    	  )
    	   {
        	   	i--;
     	    	user_save = 0;
    	    	com_save = 0;
    	   }
   	  
    	  else if(chance > 2 && user_save == 3)
    	  {
        	  	printf("\n");
   	        	printf("You win!!!!!!\n");
   	        	i = 5;
     	  }
   	  
   	      else if(chance > 2 && com_save == 3)
   	      {
         	  	printf("\n");
        	  	printf("You lose.\n");
        	  	i = 5;
    	  }
   	     	    
    	  char loc = NULL ,result = NULL, 
   	        kickpo = NULL,goalpo = NULL;
   	  
          int number = 0,number_2 = 0;
   	 
    	  chance++;
   	  
       }
   }
   
   else
   {
   	   printf("Charge your point.\n\n");
   	   printf(
   	   "How much point do you want to charge?\n"
   	   );
   	   scanf("%d",&point);
   	   
   	   fp = fopen("point_manager.txt","w+");
   	   fprintf(fp,"%d",point);
   	   fclose(fp);
   }
}

char position()
{
	if(number == -1)
	return 'L';
	
	else if(number == 0)
	return 'C';
	
	else if(number == 1)
	return 'R';
	
}

char goalk()
{
	if(number_2 == -1)
	return 'L';
	
	else if(number_2 == 0)
	return 'C';
	
	else if(number_2 == 1)
	return 'R';
}

char mov()
{
	if(loc == 'l')
	return 'L';
	
	else if(loc == 'L')
	return 'L';
	
	else if(loc == 'c')
	return 'C';
	
	else if(loc == 'C')
	return 'C';
	
	else if(loc == 'r')
	return 'R';
	
	else if(loc == 'R')
	return 'R';
}
