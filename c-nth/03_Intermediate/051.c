//	���� �Է¹ޱ�: getch() 

#include <stdio.h>

#define ENTER 13

int main(void) {
	
	int ch;
	
	printf("�ƽ�Ű �ڵ�� ��ȯ�� Ű�� ��������...\n");
	printf("ENTER Ű�� ������ ���α׷��� ����˴ϴ�.\n");
	printf("\n");
	
	do {
		ch = getch();
		
		if(ch != ENTER) {
			printf("Char: %c \t ASCII Code: %d\n", ch, ch);
		}
	}
	while(ch != ENTER);
	
	return 0;
}

/*
	�Լ����� : int getch(void)
*/
