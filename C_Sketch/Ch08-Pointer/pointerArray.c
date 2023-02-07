#include <stdio.h>

int main(void) {
	
	/*	포인터 배열 변수 선언 
		포인터 배열이란,  주소값을 저장하는 포인터를 배열 원소로 하는 배열을 말한다.  
		포인터 배열 ptrArray 는 int 형 포인터 3개를 원소로 갖는 배열이다.
		포인터 배열 ptrArray 는 선언과 동시에 초기값으로 모두 NULL로 채워진다. 
	*/ 
	int *ptrArray[3] = {NULL};
	int i, a=10, b=20, c=30;
	
	ptrArray[0] = &a;
	ptrArray[1] = &b;
	ptrArray[2] = &c;
	
	for(i=0 ; i<3 ; i++) {
		printf("*ptrArray[%d] = %d\n", i, *ptrArray[i]);
	}
	
	for(i=0 ; i<3 ; i++) {
		scanf("%d", ptrArray[i]);
		printf("%d, %d, %d\n", a, b, c);
	}
	
	return 0;
}
