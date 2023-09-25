#include <stdio.h>

int main() {
	int x = 1;
	int y = 2;
	int max;
	
	max = x > y ? x : y;
	printf("max: %d, x: %d, y: %d", max, x, y);

return 0;
}
