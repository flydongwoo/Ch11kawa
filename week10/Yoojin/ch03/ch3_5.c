#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) 
{
	float x = 0;
	printf("실수를 입력하시오: ");
	scanf("%f", &x);

	printf("다항식의 값은 %.2f\n", 3 * x * x + 7 * x + 11);

	return 0;
}