#include <stdio.h>

#define MAX(a, b) a>b ? a : b
#define MIN(a, b) a<b ? a : b

int main(void) {
	int i, j;
	i = 5;
	j = 7;
	
	printf("최대 값은 %d 입니다. \n", MAX(i, j));
	printf("최소 값은 %d 입니다. \n", MIN(i, j));
	return 0; 
}
