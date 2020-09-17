#include<stdio.h>

int main(void)
{
	int x,y,z;
	
	printf("나이를 입력하세요.\n");
	scanf("%d",&x);
	
	printf("키를 입력하세요.\n");
	scanf("%d",&y);
	
	z = ((x>=13)&&(y>=120));
	
	printf("\n");
	printf("탑승 여부 판단: \n");
	printf("\n");
	
	if(z==1)
	  printf("탑승하실 수 있습니다.\n");
	
	else
	   printf("탑승하실 수 없습니다.\n");
	
	return 0;
	
}
