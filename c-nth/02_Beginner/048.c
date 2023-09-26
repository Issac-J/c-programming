#include <stdio.h>

void printf_x(int x);
void printf_global_x(void);

int x = 20;

int main(void) {
	int x = 5;
	printf("x = %d\n", x);
	printf_x(10);
	printf_global_x();
	return 0;
}

void printf_x(int x) {
	printf("x = %d\n", x);
}

void printf_global_x(void) {
	printf("x = %d\n", x);
}
