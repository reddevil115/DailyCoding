#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#define PI 3.14

int main(void)
{
	int radius = 0;
	int secret = 0;
	float circle = 0;

	printf("¹ÝÁö¸§ : ");
	scanf("%d", &radius);

	circle = pow(radius, 2) * PI;
	secret = (int)circle;

	printf("secret code : %c\n", secret);

	return 0;
	
}