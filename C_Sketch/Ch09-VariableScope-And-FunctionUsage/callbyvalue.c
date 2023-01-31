//	file: callbyvalue.c

#include <stdio.h>

void increase(int origin, int increment);

int main(void) {
	int amount = 10;
	
	increase(amount, 20);
	// 값이 증가하지 않음. 
	
	printf("%d\n", amount);
	
	return 0;
}

void increase(int origin, int increment) {
	origin += increment;
}

/*
### 함수에서 값의 전달
C언어는 함수의 인자 전달 방식이 기본적으로 값에 의한 호출(callbyvalue)이다. 

값에 의한 호출이란, 
함수 호출 시 실매개변수의 값이 형식인자에 복사되어 저장된다는 의미이다. 

함수 호출시, 변수 amount의 값 10이 매개변수인 origin에 복사되고, 20이 매개변수인 increment에 복사된다. 
*/
