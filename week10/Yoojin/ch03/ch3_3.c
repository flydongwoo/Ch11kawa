#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) 
{
	float base = 0, height = 0, area = 0;

	printf("삼각형의 밑변: ");
	scanf("%f", &base);
	printf("삼각형의 높이: ");
	scanf("%f", &height);

	area = 0.5 * height * base;

	printf("삼각형의 넒이: %.2f", area);
	
	return 0;
}