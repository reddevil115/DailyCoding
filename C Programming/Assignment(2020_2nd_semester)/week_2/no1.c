#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int secs = 0;
	int mins = 0;
	int hours = 0;

	printf("ÃÊ(second) ÀÔ·Â: ");
	scanf("%d", &secs);

	mins = secs / 60;
	hours = mins / 60;

	if (secs > 59)
	{
		secs %= mins;
	}
		
	mins %= 60;

	printf("h: %d m: %d s: %d\n", hours, mins, secs);

	return 0;
}