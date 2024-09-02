#include <stdio.h>

// 두 수 비교하기

int main(void) {
	int A, B;

	scanf("%d", &A);
	scanf("%d", &B);


	if (A > B) {
		printf("> \n");

	}
	else if (A < B) {
		printf("< \n");
	}
	else {
		printf("== \n");
	}

	return 0;
}