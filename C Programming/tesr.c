#include <stdio.h>

int main(void) {

  struct person{
  char name[30];
  char address[80];
  int age;
}p1,p2,p3;

  printf("첫번째 사람 인적사항을 입력하시오\n");
  printf("이름은?\n");
  gets(p1.name);
  printf("나이는?\n");
  scanf(" %d%*c",&p1.age);
  printf("주소는?\n");
  gets(p1.address);
  

  printf("두번째 사람 인적사항을 입력하시오\n");
  printf("이름은?\n");
  gets(p2.name);
  printf("나이는?\n");
  scanf(" %d%*c",&p2.age);
  printf("주소는?\n");
  gets(p2.address);
  

  printf("세번째 사람 인적사항을 입력하시오\n");
  printf("이름은?\n");
  gets(p3.name);
  printf("나이는?\n");
  scanf(" %d%*c",&p3.age);
  printf("주소는?\n");
  gets(p3.address);
  

  printf("첫번째 사람: %s/%s/%d\n",p1.name,p1.address,p1.age);
  printf("두번째 사람: %s/%s/%d\n",p2.name,p2.address,p2.age);
  printf("세번째 사람: %s/%s/%d\n",p3.name,p3.address,p3.age);
  

  
  return 0;
}
