#include <stdio.h>

int main(void) {
	int x = 1;
	int y = 2;
	int z = 3;
	
	if(x = y) printf("x �� y �� �����ϴ�.\n");
	if(x != y) printf("x �� y �� ���� �ʽ��ϴ�.\n");
	if(x > y) printf("x �� y ���� Ů�ϴ�.\n");
	if(x < y) printf("x �� y ���� �۽��ϴ�.\n");
	if(y >= z) printf("y �� z ���� ũ�ų�  �����ϴ�.\n");
	if(y <= z) printf("y �� z ���� �۰ų� �����ϴ�.\n");
	
	return 0; 
}