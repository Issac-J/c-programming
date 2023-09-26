#include <stdio.h>

int main(void) {
	int i = 0;
	int j = 1;
	
	printf("i 의 값 : %d, i 의 메모리 주소: %p\n", i, &i);
	printf("j 의 값 : %d, j 의 메모리 주소: %p\n", j, &j);
	return 0;
}
