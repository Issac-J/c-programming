#include <stdio.h>

int main(void) {
	
	//	포인터 변수 ptr1, ptr2 선언
	//	포인터 변수를 선언할 때는 주소 값을 담는다는 의미로 '*' 를 붙인다. 
	int *ptr1, *ptr2;
	
	/*
		#define NULL ((void *) 0) 
		
		NULL은 stdio.h 헤더파일에 정의되어 있는 포인터 상수로서, 0번지의 주소값을 의미한다. 
		여기서 (void *) 는 아직 결정되지 않은 자료형의 주소를 나타낸다.  
		
		***
		그러므로 NULL이 저장된 포인터 변수는 아무 변수도 가리키고 있지 않다는 의미로 이용된다.  
		*** 
				
	*/
	ptr1 = NULL;
	
	// 포인터 변수 ptr1 에 NULL을 할당해주었기 때문에 0번지의 주소 값이 담겨 있다.  
	printf("%u\n", ptr1);
	
	// 쓰레기 값이 출력된다. 하지만 0 이 담겨 있음. (요즘에는 바뀐듯...?) 
	printf("%u\n", ptr2);	
	
	return 0;
}
