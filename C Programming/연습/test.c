#include<stdio.h>
#include<limits.h>
#include<float.h>

int main(void)
{
 
 printf("현재 시스템의 c컴파일러의 데이터 유형의 크기: \n");
 printf("signed char: ");
 printf("\t  %d byte(%d bit)\n", sizeof(signed char), CHAR_BIT);
 printf("\t값의 범위: %d 에서 %d까지의 값\n\n",CHAR_MIN, CHAR_MAX);
 printf("unsigned char: ");
 printf("\t %d byte(%d bit) \n", sizeof(unsigned char), CHAR_BIT);
    printf("\t값의 범위: %d 에서 %d까지의 값\n\n", 0, UCHAR_MAX);
 
 printf("signed short int: ");
 printf("\t  %d byte \n", sizeof(signed short));
 printf("\t값의 범위: %d 에서 %d까지의 값\n\n", SHRT_MIN, SHRT_MAX);
 
 printf("unsigned short int: ");
 printf("\t  %d byte \n", sizeof(unsigned short));
 printf("\t값의 범위: %d 에서 %d까지의 값\n\n", 0, USHRT_MAX);
 printf("signed short int: ");
 printf("\t  %d byte \n", sizeof(signed short));
 printf("\t값의 범위: %d 에서 %d까지의 값\n\n", INT_MIN, INT_MAX);
 
 printf("unsigned int: ");
 printf("\t  %d byte \n", sizeof(unsigned int));
 printf("\t값의 범위: %d 에서 %u까지의 값\n\n", 0, UINT_MAX);
 printf("signed long int: ");
 printf("\t  %d byte \n", sizeof(signed short));
 printf("\t값의 범위: %ld 에서 %ld까지의 값\n\n", LONG_MIN, LONG_MAX);
 printf("unsigned long int: ");
 printf("\t  %d byte \n", sizeof(unsigned long));
 printf("\t값의 범위: %ld 에서 %lu까지의 값\n\n", 0, ULONG_MAX);
 
 printf("float :");
 printf("\t  %d byte\n", sizeof(float));
 printf("\t값의 범위: %E 에서 %E)\n",FLT_MIN, FLT_MAX);
 printf("\t정확도(Precision:)%d 자리\n\n",FLT_DIG );
 
  
 printf("double :");
 printf("\t  %d byte\n", sizeof(double));
 printf("\t값의 범위: %E 에서 %E)\n",DBL_MIN, DBL_MAX);
 printf("\t정확도(Precision:)%d 자리\n\n",DBL_DIG );
 
 
 return 0;

}
