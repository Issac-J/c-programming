#include <stdio.h>

int main(void) {
	
	/*	������ �迭 ���� ���� 
		������ �迭�̶�,  �ּҰ��� �����ϴ� �����͸� �迭 ���ҷ� �ϴ� �迭�� ���Ѵ�.  
		������ �迭 ptrArray �� int �� ������ 3���� ���ҷ� ���� �迭�̴�.
		������ �迭 ptrArray �� ����� ���ÿ� �ʱⰪ���� ��� NULL�� ä������. 
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
