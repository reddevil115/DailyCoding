#include<stdio.h>

int even(int n);
int absolute(int n);
int sign(int n);

int i, number, result,result_2,result_3;

int main(void)
{
       printf("정수를 입력하시오: ");
       scanf("%d\t\n", &number);

       result = even(number);
       result_2 = absolute(number);
       result_3 = sign(number);

      even(number);
      absolute(number);
      sign(number);

      if (result == 1)
          printf("even()의 결과: 짝수\n");
      
     else if(result == 2)
          printf("even()의 결과: 0\n");
     
     else
          printf("even()의 결과: 홀수\n");

     printf("absolute()의 결과: %d\n",result_2);

   if (result_3 == 1)
       printf("sign()의 결과: 양수\n");

  else if (result_3 == -1)
       printf("sign()의 결과: 음수\n");

 else
       printf("sign()의 결과: 0\n");
}


int even(int n)
{
     n = number % 2;
     if (n == 0)
       return 1;
     
     else if (number == 0)
       return 2;
   else
       return 0;
}

int absolute(int n)
{
     return abs(number);
}

int sign(int n)
{
       if (number > 0)
          return 1;

       else if (number == 0)
          return 0;

       else
           return -1;
}
