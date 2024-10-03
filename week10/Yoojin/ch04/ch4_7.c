// 운동에너지 E 계산 프로그램
// 사용자로부터 질량m, 속도v 입력받음
// 모든 변수는 double형으로

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) 
{
	double E = 0, mass = 0, speed = 0;

	printf("질량(kg): ");
	scanf("%lf", &mass);
	printf("속도(m/s): ");
	scanf("%lf", &speed);

	E = mass * speed * speed / 2.0;

	printf("운동에너지(J): %lf\n", E);
	return 0;
}