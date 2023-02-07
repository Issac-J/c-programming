#include <stdio.h> 

int main(void) {
	
	// 변수 선언 및 할당(data, ch) 
	int data = 100;
	char ch = 'A';
	
	// 포인터 변수 선언 및 주소값 할당
	// 주소값 할당이라는 의미는 가리킨다는 뜻으로 생각하면 될 것 같다. 
	int *ptrInt = &data;
	char *ptrChar = &ch;
	
	/*
		*ptrInt 는 data 와 동일.
		*ptrChar 는 ch 와 동일. 
	*/
	printf("간접 참조 출력 : %d %c\n", *ptrInt, *ptrChar);
	printf("\n"); 
	
	*ptrInt = 200;
	*ptrChar = 'B';
	printf("직접 참조 출력 : %d %c\n", data, ch);
	printf("간접 참조 출력 : %d %c\n", *ptrInt, *ptrChar);
	
	return 0;
}
