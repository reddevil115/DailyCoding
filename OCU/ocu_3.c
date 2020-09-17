#include <stdio.h>

//int의 값
int int_val;
//char의 값 
char char_val;

int main(void)
{
	printf("만 자리 수의 값을 입력하시오.\n");
	
	//만 자리 수의 값을 키보드를 통해 입력 받고 int_val에 대입한다.
	scanf("%d",&int_val);
	printf("\n");
	
	//char_val 변수에 int_val 변수에 저장된 값을    대입한다.
	char_val = int_val;
	
	/*화면에 int_val과 char_val 변수에 저장된 값을
	  정수형으로 출력한다.*/
	printf("int의 값: %d\n",int_val);
	printf("char의 값: %d\n",char_val);
	
	return 0;
}
