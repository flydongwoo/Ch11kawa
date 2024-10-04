#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) 
{
	double F = 0, C = 0;
	printf("화씨값을 입력하시오: ");
	scanf("%lf", &F);

    // 화씨 -> 섭씨 온도 계산식
    C = 5.0 / 9.0 * (F - 32);

	printf("섭씨값은 %.2lf도 입니다.\n", C);
	
	return 0;
}
