#include <stdio.h> 

int main(void) {
	
	// ���� ���� �� �Ҵ�(data, ch) 
	int data = 100;
	char ch = 'A';
	
	// ������ ���� ���� �� �ּҰ� �Ҵ�
	// �ּҰ� �Ҵ��̶�� �ǹ̴� ����Ų�ٴ� ������ �����ϸ� �� �� ����. 
	int *ptrInt = &data;
	char *ptrChar = &ch;
	
	/*
		*ptrInt �� data �� ����.
		*ptrChar �� ch �� ����. 
	*/
	printf("���� ���� ��� : %d %c\n", *ptrInt, *ptrChar);
	printf("\n"); 
	
	*ptrInt = 200;
	*ptrChar = 'B';
	printf("���� ���� ��� : %d %c\n", data, ch);
	printf("���� ���� ��� : %d %c\n", *ptrInt, *ptrChar);
	
	return 0;
}
