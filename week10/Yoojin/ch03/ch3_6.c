#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) 
{
	float weight = 0;
	printf("몸무게를 입력하시오(단위: kg): ");
	scanf("%f", &weight);

	printf("달에서의 몸무게는 %.2fkg입니다.\n", weight * 17 / 100);

	return 0;
}