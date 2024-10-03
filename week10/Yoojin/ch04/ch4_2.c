// 사용자로부터 정수를 16진수로 입력받음
// 8, 10, 16진수 형태로 출력하는 프로그램

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) 
{
	int num_16 = 0;

	printf("16진수 정수를 입력하시오: ");
	scanf("%x", &num_16);

	printf("8진수로는 %.4o입니다.\n", num_16);
	printf("10진수로는 %d입니다.\n", num_16);
	printf("16진수로는 %#x입니다.\n", num_16);

	return 0;
}