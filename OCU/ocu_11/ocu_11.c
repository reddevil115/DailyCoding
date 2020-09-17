#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

#define max 500

FILE *fp = NULL;

char str[max];

int main(void)
{
	fp = fopen("11_string.txt","r");
	
	fgets(fp,"%s",&str);
	
	printf("%s",str);
	
	fclose(fp);
	
}
