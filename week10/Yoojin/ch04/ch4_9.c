// 'a'+1, 'a'+2, 'a'+3을 문자 형식으로 출력하는 프로그램
// 이 프로그램에서 알 수 있는 것은?
// -> 문자에 수를 더하면, 아스키코드 덧셈이 된다

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) 
{
	printf("%c\n", 'a' + 1);
	printf("%c\n", 'a' + 2);
	printf("%c\n", 'a' + 3);

	return 0;
}