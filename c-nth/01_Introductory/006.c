#include <stdio.h>

int main(void) {
	int i;
	int sum = 0;

	for (i = 1; i <= 10; i++) {
		sum = sum + i;
	}

	printf("1부터 10까지의 합 : %d\n", sum);
	return 0;
}
