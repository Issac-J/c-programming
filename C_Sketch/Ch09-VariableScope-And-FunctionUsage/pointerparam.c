//	file: pointerparam.c

#include <stdio.h> 

void add(int *, int, int);

int main(void)	{
	int m = 0, n = 0, sum = 0;
	
	printf("두 정수 입력: ");
	scanf("%d %d", &m, &n);
	
	add(&sum, m, n);
	
	printf("두 정수의 합: %d\n", sum);
	
	return 0;
}

void add(int *psum, int a, int b) {
	*psum = a + b;	
}

/*
주소 연산자 &

매개변수를 포인터로 이용하면 결국 참조에 의한 호출이 된다. 

함수 원형 void add(int *, int, int); 에서 첫 매개변수가 포인터인 int* 이다. 
함수 add()는 두 번째와 세 번째 인자를 합해 첫 번째 인자가 가리키는 변수에 저장하는 함수다. 

함수 add()정의에서 합을 저장하는 문장은 *sum = a + b; 로 구현한다. 
이 함수를 호출하는 방법은 합이 저장될 변수인 sum을 선언하여 주소값인  &sum을 인자로 호출한다.
함수 호출 후 변수 sum에는 m 과 n의 합이 저장되어 있다. 
*/
