//	file: callbyreference.c

#include <stdio.h>

void increase(int *origin, int increment);

int main(void) {
	int amount = 10;
	
	increase(&amount, 20);
	
	printf("%d\n", amount);
	
	return 0;
}

void increase(int *origin, int increment) {
	
	//	*origin은 origin이 가리키는 변수 자체
	*origin += increment;
}

/*
### 함수에서 주소의 전달

함수 increase()에서 첫번째 매개변수를 int* 로 수정하고,
함수 구현도 *origin += increment; 로 수정해보자. 

함수 main()에서 변수 amount에 10을 저장한 후 increase(&amount, 20) 로 함수를 호출한다. 



함수 호출시 첫번째 인자가 &amount이므로 변수 amount의 주소값이 매개변수인 origin에 복사되고, 
20이 매개변수인 increment에 복사된다. 
함수 increase()의 내부 실행에서 매개변수 origin이 포인터이므로 *origin 은 변수 amount 자체를 의미한다. 


정리하자면,  
C언어에서 포인터를 매개변수로 사용하면 함수로 전달된 실매개변수의 주소를 이용하여 그 변수를 참조할 수 있다. 
이와 같이 함수에서 주소의 호출을 참조에 의한 호출이라 한다.  
 
*/
