#include <stdio.h>

int main(void) {
	
	int data = 100;
	int *ptrInt;
	
	ptrInt = &data;
	
	printf("������ �ּҰ�(&data) : %d\n", &data);
	printf("������ �ּҰ�(ptrInt) : %d\n", ptrInt);
	printf("������ ������ ũ�� : %d\n", sizeof(ptrInt));
	
	return 0;
}
