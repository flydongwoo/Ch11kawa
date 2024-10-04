#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) 
{
	float x = 0, result = 0;
	printf("실수를 입력하시오: ");
	scanf("%f", &x);

    result = 3.0*x*x + 7.0*x + 11;

	printf("다항식의 값은 %.2f\n", result);

	return 0;
}
