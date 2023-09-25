#include <stdio.h>

int main(void) {
	int x = 5;
	int y = 2;
	
	if(x > 0 && x < 10) printf("0 > x < 10\n");
	
	if(x < 0 || y == 2) printf("x 는 0보다 작거나, y 는 2입니다.");
	
	if(!(x > y)) printf("x 는 y 보다 크지 않습니다.\n");
	
	return 0;
}
