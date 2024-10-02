#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) 
{
	float mile = 0;
	printf("마일을 입력하시오: ");
	scanf("%f", &mile);

	printf("%.1f 마일은 %.2f미터입니다.\n", mile, mile * 1609);

	return 0;
}