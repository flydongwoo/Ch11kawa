// 면적 단위인 '평'을 제곱미터로 환산하는 프로그램
// 1평 = 3.3제곱미터
// 기호 상수를 이용하여 1평당 제곱미터를 나타낼 것

#define _CRT_SECURE_NO_WARNINGS
#define SQMETER_PER_PYEONG 3.3058

#include <stdio.h>

int main(void) 
{
	double pyeong = 0;
	printf("평을 입력하세요: ");
	scanf("%lf", &pyeong);

	printf("%lf평방미터입니다.\n", pyeong * SQMETER_PER_PYEONG);

	return 0;
}