//	file: pointerparam.c

#include <stdio.h> 

void add(int *, int, int);

int main(void)	{
	int m = 0, n = 0, sum = 0;
	
	printf("�� ���� �Է�: ");
	scanf("%d %d", &m, &n);
	
	add(&sum, m, n);
	
	printf("�� ������ ��: %d\n", sum);
	
	return 0;
}

void add(int *psum, int a, int b) {
	*psum = a + b;	
}

/*
�ּ� ������ &

�Ű������� �����ͷ� �̿��ϸ� �ᱹ ������ ���� ȣ���� �ȴ�. 

�Լ� ���� void add(int *, int, int); ���� ù �Ű������� �������� int* �̴�. 
�Լ� add()�� �� ��°�� �� ��° ���ڸ� ���� ù ��° ���ڰ� ����Ű�� ������ �����ϴ� �Լ���. 

�Լ� add()���ǿ��� ���� �����ϴ� ������ *sum = a + b; �� �����Ѵ�. 
�� �Լ��� ȣ���ϴ� ����� ���� ����� ������ sum�� �����Ͽ� �ּҰ���  &sum�� ���ڷ� ȣ���Ѵ�.
�Լ� ȣ�� �� ���� sum���� m �� n�� ���� ����Ǿ� �ִ�. 
*/
