#include<stdio.h>

int main(void)
{
	int x;
	float y;
	float z;
	
	printf("포지션 타입을 입력하세요.\n");
	printf("투수:1 타자:2\n");
	scanf("%d",&x);
	
	if(x==1)
	  printf("방어율을 입력하세요.\n");
	  scanf("%f",&y);
	  
	  if(y<=0.500)
	    printf("아주 좋은 투수 입니다.\n");
	 
	  if(y<=3.000)
	     printf("좋은 투수 입니다.\n");
	
	  if(y< 5.000)
	    printf("보통입니다.\n");
	   
	  if(y>= 5.000)
	    printf("못 던지는 투수 입니다.\n");
	
	if(x==2)
	  printf("타율을 입력하세요.\n");
	  scanf("%f",&z);
	  
	  if(z >= 0.500)
	    printf("아주 좋은 타자 입니다.\n");
	 
	  if(z >= 0.300)
	     printf("훌륭한 타자 입니다.\n");
	
	  if(z >= 0.250)
	    printf("보통입니다.\n");
	   
	  if(z < 0.250)
	    printf("못 치는 타자 입니다.\n");
	
	
	return 0;
	
}
