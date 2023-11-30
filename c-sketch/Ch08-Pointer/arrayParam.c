#include <stdio.h>

int sumary(int *ary, int SIZE);

int main(void) {
	
	int i, sum = 0;
	int point[] = {95, 93, 90, 88, 76};
	int *addr = point;
	int aryLength = sizeof(point) / sizeof(int);
	
	for(i=0; i<aryLength; i++) {
		sum += *addr++;
	}
	
	printf("메인 함수에서 구한 합 : %d\n", sum);
	
	return 0;
}
