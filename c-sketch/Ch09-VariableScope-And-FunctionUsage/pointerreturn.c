//	file: pointerreturn.c

#include <stdio.h>

int * add(int *, int, int);
int * subtract(int *, int, int);
int * multiply(int, int);

int main(void) {
	
	int m = 0, n =0, sum = 0, diff = 0;
	
	printf("�� ���� �Է�: ");
	scanf("%d %d", &m, &n);
	
	printf("�� ���� ��  : %d\n", *add(&sum, m, n));
	printf("�� ���� ��  : %d\n", *subtract(&diff, m, n));
	printf("�� ���� ��  : %d\n", *multiply(m, n));
	
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
### �ּҰ� ��ȯ

�Լ��� ����� �����ͷ� ��ȯ�ϴ� ���� �����ϴ�.

�Լ� ���� int * add(int *, int, int); �� �ϴ� �Լ� add()�� ��ȯ���� �������� int *�̴�. 
�Լ� add() ���ǿ��� �� ���� ���� ù ��° ���ڰ� ����Ű�� ������ ������ �� �������� ù ��° ���ڸ� �״�� ��ȯ�Ѵ�. 
�Լ� add()�� *add(&sum, a, b) ȣ���ϸ� ���� sum�� �� a + b �� ����ȴ�. 
���� ��ȯ ���� �����Ͱ� ����Ű�� ������ sum�� �ٷ� ������ �� �ִ�.  
*/
