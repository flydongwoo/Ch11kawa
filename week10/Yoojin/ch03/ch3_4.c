#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) 
{
	double F = 0;
	printf("화씨값을 입력하시오: ");
	scanf("%lf", &F);

	printf("섭씨값은 %.2lf도 입니다.\n", 5 / 9 * (F - 32));
	
	return 0;
}