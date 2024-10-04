// 사용자로부터 실수를 하나 입력받음
// 소수점 표기 방법과 지수 표기 방법으로 동시에 출력하는 프로그램

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) 
{
	double num = 0;

	printf("실수를 입력하시오: ");
	scanf("%lf", &num);

	printf("실수형식으로는 %f입니다.\n", num);
	printf("지수형식으로는 %e입니다.\n", num);

	return 0;
}