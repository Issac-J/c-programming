#include <stdio.h>

int main(void) {
	int b;
	int j;

	b = 10 > 5;
	j = 10 > 20;

	printf("논리형 변수 b : %d\n", b);  // 1을 출력
	printf("논리형 변수 j : %d\n", j);  // 0을 출력
}
