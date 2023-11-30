// file: pointerarray.c 

#include <stdio.h>

int main(void) {
	
	// 포인터 배열 선언
	int *pary[3] = { NULL };
	int i, a = 10, b = 20, c = 30;


	pary[0] = &a;
	pary[1] = &b;
	pary[2] = &c;
	
	for(i=0; i<3; i++) {
		printf("*pary[%d] = %d\n", i, *pary[i]);
	}
	
	for(i=0; i<3; i++) {
		scanf("%d", pary[i]);
		printf("%d %d %d\n", a, b, c);
	}
		
	return 0;
}
