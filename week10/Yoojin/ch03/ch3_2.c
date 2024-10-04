#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) 
{
	float mile = 0;
    double meter = 0;
	printf("마일을 입력하시오: ");
	scanf("%f", &mile);

    meter = 1609.0 * mile;
	printf("%.1f 마일은 %.2lf미터입니다.\n", mile, meter);

	return 0;
}
