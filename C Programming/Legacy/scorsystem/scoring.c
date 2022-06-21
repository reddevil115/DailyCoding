#include <stdio.h>

FILE*fp = NULL;

char name[10];
int score[];
int long idno;
int sbjno,i,sum,average;

int main(void)
{
	fp = fopen("score_manager.txt","w");
	fprintf(fp,"Result Sheet\n\n");
	
	printf("Score Calculater\n\n");
	printf("<Bagic informations>\n\n");
	
	printf("Type your name: ");
	gets(name);
	
	printf("Type your student numbers: ");
	scanf("%d%*c\n",&idno);
	
	printf(
	 "Type number of subjects you enrolled: "
	);
	scanf("%d%*c\n",&sbjno);
	printf("\n");
	
	fprintf(
	fp,"Name: %s\nStudent ID: %d\n\n",name,idno
	);

	printf("<Score informations>\n\n");
	for(i=1; i<sbjno+1; i++)
	{
		printf(
		"Type your #%d subject score: ",i
		);
		
		scanf("%d%*c\n",&score[i-1]);
		fprintf(
		fp,"#%d subject score: %d\n\n",i,score[i-1]
		);
			
	}
	
	printf("\nCheck your information\n\n");
	printf("<Bagic informations>\n\n");
	printf("Your name: %s\n",name);
	printf("Your Student Numbers: %d\n\n",idno);
	
	printf("<Score informations>\n\n");
	for(i=1; i<sbjno+1; i++)
	{
		printf("your #%d subject score: ",i);
		printf("%d\n",score[i-1]);
	}
	
	for(i=0; i<sbjno-1; i++)
	{
		sum += score[i];
	}
	
	average = sum/sbjno;		
	
	printf("\n<Advance informtions>\n\n");
	printf("Total score: %d\n",sum);
	printf("Average: %d\n",average);
	
	fprintf(
	fp,"Sum: %d\nAverage: %d\n", sum, average
	);
	
	fclose(fp);
	
}
