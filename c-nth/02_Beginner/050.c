#include <stdio.h>

#define MAX(a, b) a>b ? a : b
#define MIN(a, b) a<b ? a : b

int main(void) {
	int i, j;
	i = 5;
	j = 7;
	
	printf("�ִ� ���� %d �Դϴ�. \n", MAX(i, j));
	printf("�ּ� ���� %d �Դϴ�. \n", MIN(i, j));
	return 0; 
}
