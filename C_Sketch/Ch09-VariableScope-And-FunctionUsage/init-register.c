//	file: init-register.c

/*
	레지스터 변수는 초기값을 지정하지 않을 경우 쓰레기 값이 저장된다.
	초기값을 지정하지 않을 경우 기본값이 있는지 알아보는 프로그램을 작성하시오. 
*/

#include <stdio.h>

int main(void) {
	register int a = 10;
	register int b;
	
	printf("%d %d\n", a, b);
	
	if(b != 0) {
		printf("레지스터 변수 b에 값 '%d'이 할당되어 있습니다. ", b);
	}
	
	return 0;
}
