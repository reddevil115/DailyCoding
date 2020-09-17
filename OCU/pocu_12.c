#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float cal(int val_w, int val_h);

int main(void)
{
	struct point
	{
		int val_x, val_y;
	};
	
	struct rectangle
	{
		struct point point1;
		struct point point2;
	}matval;
	
	printf("<사각형 정보 계산 프로그램>\n\n");
	
	printf("왼쪽 상단의 정보를 입력합니다.\n\n");
	
	printf("X값을 '정수'로 입력하세요: ");
	scanf("%d",&matval.point1.val_x);
	
	printf("Y값을 '정수'로 입력하세요: ");
	scanf("%d",&matval.point1.val_y);
	
	printf("\n");
	
	printf("오른쪽 하단의 정보를 입력합니다.\n\n");
	
	printf("X값을 '정수'로 입력하세요: ");
	scanf("%d",&matval.point2.val_x);
	
	printf("Y값을 '정수'로 입력하세요: ");
	scanf("%d",&matval.point2.val_y);
	printf("\n");
	
	int wide = abs(matval.point2.val_x - matval.point1.val_x);
	
	int height = abs(matval.point1.val_y - matval.point2.val_y);
	
	int area = wide*height;
	
	float dia = cal( wide , height);
	
	printf("**********계산 결과**********\n\n");
	printf("세로 길이: %d\n", height);
	printf("가로 길이: %d\n", wide);
	printf("면적: %d\n", area);
	printf("대각선 길이: %.2f\n",dia);
	
	return 0;
}

float cal(int val_w, int val_h)
{
	float cal_val =
	 sqrt(pow(val_w,2) + pow(val_h,2));
	
	return cal_val;
}
