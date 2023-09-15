#include <stdio.h>

#define HUNDRED 100

const char j=10;

int main(void) {
//	HUNDRED = 200 // Error
//	j = 200 // Error

	printf("문자형 상수 HUNDRED : %d\n", HUNDRED);
	printf("문자형 상수       j : %d\n", j);

	return 0;
}
