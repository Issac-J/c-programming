#include <stdio.h>

int sum(int value);

main() {
	printf("1����   10������ �� : %d\n", sum(10));
	printf("1����  100������ �� : %d\n", sum(100));
	printf("1���� 1000������ �� : %d\n", sum(1000));
}

int sum(int value) {
	int i;
	int sum = 0;
	
	for (i = 1; i <= value; i++) {
		sum = sum + i;
	}

	return sum;
}
