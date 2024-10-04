// int형 변수 x와 y
// x, y 값을 서로 교환하는 프로그램
// x, y는 각각 10, 20으로 초기화

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) 
{
	int x = 10, y = 20, temp = 0;

	printf("x=%d y=%d\n", x, y);

	temp = x;
	x = y;
	y = temp;

	printf("x=%d y=%d\n", x, y);

	return 0;
}