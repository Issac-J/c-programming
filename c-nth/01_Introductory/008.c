#include <stdio.h>

int sum(int value);

main() {
	printf("1부터   10까지의 합 : %d\n", sum(10));
	printf("1부터  100까지의 합 : %d\n", sum(100));
	printf("1부터 1000까지의 합 : %d\n", sum(1000));
}

int sum(int value) {
	int i;
	int sum = 0;
	
	for (i = 1; i <= value; i++) {
		sum = sum + i;
	}

	return sum;
}
