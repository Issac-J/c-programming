//	file: init-register.c

/*
	�������� ������ �ʱⰪ�� �������� ���� ��� ������ ���� ����ȴ�.
	�ʱⰪ�� �������� ���� ��� �⺻���� �ִ��� �˾ƺ��� ���α׷��� �ۼ��Ͻÿ�. 
*/

#include <stdio.h>

int main(void) {
	register int a = 10;
	register int b;
	
	printf("%d %d\n", a, b);
	
	if(b != 0) {
		printf("�������� ���� b�� �� '%d'�� �Ҵ�Ǿ� �ֽ��ϴ�. ", b);
	}
	
	return 0;
}
