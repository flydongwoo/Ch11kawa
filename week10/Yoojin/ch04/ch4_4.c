// 상자의 부피를 구하는 프로그램
// 부피 = 길이*너비*높이
// 길이, 너비, 높이는 모두 double형 입력처리

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) 
{
	double w = 0, h = 0, d = 0, volume = 0;

	printf("상자의 가로 세로 높이를 한번에 입력: ");
	scanf("%lf %lf %lf", &w, &h, &d);

	volume = w * h * d;
    
	printf("상자의 부피는 %lf입니다.\n", volume);

	return 0;
}