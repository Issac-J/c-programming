//	file: pointerreturn.c

#include <stdio.h>

int * add(int *, int, int);
int * subtract(int *, int, int);
int * multiply(int, int);

int main(void) {
	
	int m = 0, n =0, sum = 0, diff = 0;
	
	printf("두 정수 입력: ");
	scanf("%d %d", &m, &n);
	
	printf("두 정수 합  : %d\n", *add(&sum, m, n));
	printf("두 정수 차  : %d\n", *subtract(&diff, m, n));
	printf("두 정수 곱  : %d\n", *multiply(m, n));
	
	return 0;
}

int * add(int *psum, int a, int b) {
	*psum = a + b;
	
	return psum;
}

int * subtract(int *pdiff, int a, int b) {
	*pdiff = a - b;
	
	return pdiff;
}

int * multiply(int a, int b) {
	int mult = a * b;
	
	return &mult;
}

/*
### 주소값 반환

함수의 결과를 포인터로 반환하는 것이 가능하다.

함수 원형 int * add(int *, int, int); 로 하는 함수 add()는 반환값이 포인터인 int *이다. 
함수 add() 정의에서 두 수의 합을 첫 번째 인자가 가리키는 변수에 저장한 후 포인터인 첫 번째 인자를 그대로 반환한다. 
함수 add()를 *add(&sum, a, b) 호출하면 변수 sum에 합 a + b 가 저장된다. 
또한 반환 값인 포인터가 가리키는 변수인 sum을 바로 참조할 수 있다.  
*/
