// 사용자가 ASCII 코드값을 입력
// 입력에 맞는 문자를 출력하는 프로그램

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) 
{
	int ASCII = 0;
	printf("아스키 코드값을 입력하시오: ");
	scanf("%d", &ASCII);

	printf("문자: %c입니다.\n", ASCII);

	return 0;
}