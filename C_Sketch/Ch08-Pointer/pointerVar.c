#include <stdio.h>

int main(void) {
	
	int data = 100;
	int *ptrInt;
	
	ptrInt = &data;
	
	printf("십진수 주소값(&data) : %d\n", &data);
	printf("십진수 주소값(ptrInt) : %d\n", ptrInt);
	printf("포인터 변수의 크기 : %d\n", sizeof(ptrInt));
	
	return 0;
}
