#include <stdio.h>

#define HUNDRED_THOUSAND 100000

const int j=200000;

int main(void) {
//	HUNDRED_THOUSAND = 200000 // Error
//	j = 300000 // Error

	printf("정수형 상수 HUNDRED_THOUSAND  : %d\n", HUNDRED_THOUSAND);
	printf("정수형 상수       j : %d\n", j);

	return 0;
}
