//	file: callbyvalue.c

#include <stdio.h>

void increase(int origin, int increment);

int main(void) {
	int amount = 10;
	
	increase(amount, 20);
	// ���� �������� ����. 
	
	printf("%d\n", amount);
	
	return 0;
}

void increase(int origin, int increment) {
	origin += increment;
}

/*
### �Լ����� ���� ����
C���� �Լ��� ���� ���� ����� �⺻������ ���� ���� ȣ��(callbyvalue)�̴�. 

���� ���� ȣ���̶�, 
�Լ� ȣ�� �� �ǸŰ������� ���� �������ڿ� ����Ǿ� ����ȴٴ� �ǹ��̴�. 

�Լ� ȣ���, ���� amount�� �� 10�� �Ű������� origin�� ����ǰ�, 20�� �Ű������� increment�� ����ȴ�. 
*/
