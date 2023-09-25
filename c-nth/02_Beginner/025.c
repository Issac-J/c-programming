#include <stdio.h>

int main(void) {
	int x = 1;
	int y = 2;
	int z = 3;
	
	if(x = y) printf("x 는 y 와 같습니다.\n");
	if(x != y) printf("x 는 y 와 같지 않습니다.\n");
	if(x > y) printf("x 는 y 보다 큽니다.\n");
	if(x < y) printf("x 는 y 보다 작습니다.\n");
	if(y >= z) printf("y 는 z 보다 크거나  같습니다.\n");
	if(y <= z) printf("y 는 z 보다 작거나 같습니다.\n");
	
	return 0; 
}
