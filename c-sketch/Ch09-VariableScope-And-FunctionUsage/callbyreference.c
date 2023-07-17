//	file: callbyreference.c

#include <stdio.h>

void increase(int *origin, int increment);

int main(void) {
	int amount = 10;
	
	increase(&amount, 20);
	
	printf("%d\n", amount);
	
	return 0;
}

void increase(int *origin, int increment) {
	
	//	*origin�� origin�� ����Ű�� ���� ��ü
	*origin += increment;
}

/*
### �Լ����� �ּ��� ����

�Լ� increase()���� ù��° �Ű������� int* �� �����ϰ�,
�Լ� ������ *origin += increment; �� �����غ���. 

�Լ� main()���� ���� amount�� 10�� ������ �� increase(&amount, 20) �� �Լ��� ȣ���Ѵ�. 



�Լ� ȣ��� ù��° ���ڰ� &amount�̹Ƿ� ���� amount�� �ּҰ��� �Ű������� origin�� ����ǰ�, 
20�� �Ű������� increment�� ����ȴ�. 
�Լ� increase()�� ���� ���࿡�� �Ű����� origin�� �������̹Ƿ� *origin �� ���� amount ��ü�� �ǹ��Ѵ�. 


�������ڸ�,  
C���� �����͸� �Ű������� ����ϸ� �Լ��� ���޵� �ǸŰ������� �ּҸ� �̿��Ͽ� �� ������ ������ �� �ִ�. 
�̿� ���� �Լ����� �ּ��� ȣ���� ������ ���� ȣ���̶� �Ѵ�.  
 
*/
