//	���� �� �Է¹ޱ�: scanf() 

#include <stdio.h>

int main(void) {
	
	int i, tmp;
	int total = 0;
	
	for( i=0 ; i<3 ; i++) {
		printf("%d ��° �������� �Է��� �� Enter Ű�� ��������. \n", i + 1);
		scanf("%d", &tmp);
		
		total += tmp;
		
		printf("�Է� ��: %d \t Total: %d\n", tmp, total);
		printf("\n");
	}
	printf("���� ������ ����: %d\n", total);
	
	return 0;
}
