/* printf와 scanf 연습 */

#include<stdio.h> /*전처리기*/

int x;
int y;
int sum;

/*저장 위치, 'x' 'y' 'sum' */

int main(void)
{
/* 메인 함수 시작 */
	
	printf("<두수의 나머지를 구하는 프로그램>\n");
	printf("\n");
	printf("•첫번째 수를 입력하세요: ");
	scanf("%d",&x);
	
	/*%d는 10진수 정수, &n은 저장 위치*/
	
	printf("•두번째 수를 입력하세요: ");
	scanf("%d",&y);
	
	sum = x % y;
	
	printf("•두수의 나머지: %d", sum);
	
	
	printf("total=%d\n",a,b);
	
}
/*메인 함수 종료*/
