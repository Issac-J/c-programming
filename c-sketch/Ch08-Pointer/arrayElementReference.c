#include <stdio.h>

int main(void) {
	
	int i, sum = 0;
	int pointArr[] = {97, 68, 14, 54, 37};
	int *address = pointArr;
	int arrLength = sizeof(pointArr) / sizeof(int);
	
//	printf("%u %d\n", address, arrLength);
	
	
	//	�Ϲ������� �迭�� ��� ���ҵ��� ���� ���ϴ� ��� 
	for(i=0 ; i<arrLength ; i++) {
		sum += pointArr[i];
	}
	printf("Sum : %d\n", sum);
	printf("----------------------\n");
	
	//	�����͸� �̿��Ͽ� �迭�� ��� ���ҵ��� ���� ���ϴ� ��� 
	i = 0, sum = 0;
	for(i=0 ; i<arrLength; i++) {
		sum += *(address + i);
		//	���� : sum += *(address++);
		//	���� : sum += *(pointArr + i);
	}
	printf("Sum : %d\n", sum);
	printf("----------------------\n");
	
	return 0;
}
