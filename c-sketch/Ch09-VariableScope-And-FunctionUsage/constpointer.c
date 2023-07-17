//	file: constpointer.c

#include <stdio.h>

void multiply(double *, const double *, const double *);
void devideandincrement(double *, double *, double *);

int main(void) {
	double m = 0, n = 0, mult = 0, dev = 0;
	
	printf("�� �Ǽ� �Է�    : ");
	scanf("%lf %lf", &m, &n);
	
//	printf("�Է¹��� �� �Ǽ�: %lf %lf\n", m, n);
	
	multiply(&mult, &m, &n);
	devideandincrement(&dev, &m, &n);
	
	printf("�� �Ǽ��� ��    : %.2f\n", mult);
	printf("�� �Ǽ��� ����  : %.2f\n", dev);
	printf("���� �� �� �Ǽ� : %.2f %.2f\n", m, n);
	
	return 0;
}

void multiply(double *result, const double *a, const double *b) {
	*result = *a * *b;
	
	// ���� �߻�
	// *a = *a + 1;
	// *b = *b + 1;
}

void devideandincrement(double *result, double *a, double *b) {
	*result = *a / *b;
	++*a;
	(*b)++;
}


/*
Keyword : const

�����͸� �Ű������� �̿��ϸ� ������ ����� ���� �� �־� ���ϴ�. 
�׷��� �̷��� ������ ���� ȣ���� �Ű������� ����Ű�� ���� ���� ������ �ʴ� ������ ������ �� �ִ�. 

�̷��� ������ ������ �߸��� ������ �̸� �����ϴ� ����� �ִ�. 

�� ������ ������ �ʴ� �Լ��� ���� �տ� Ű���� const�� �����Ѵ�.
Ű���� const�� ������ ������ ������ ����Ű�� ������ ������ �� ������ �Ѵ�.  
*/
