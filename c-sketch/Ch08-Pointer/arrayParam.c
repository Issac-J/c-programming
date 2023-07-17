#include <stdio.h>



int main(void) {
	
	int i, sum = 0;
	int point[] = {95, 88, 76, 54, 85, 33, 65, 78, 99, 82};
	int *address = point;
	int aryLength = sizeof(point) / sizeof(int);
	
	//	�迭 ���ҵ��� �ּҸ� ��� 
	for( i=0 ; i<aryLength; i++) {
		printf("point[%d] �� �ּ� : %u\n", i, point + i);
	}
	printf("*******************************************\n");
	
	// initialize
	address = point;
	
	//	���ο��� ���ϴ� Sum  
	for( i=0 ; i<aryLength; i++) {
		sum += *(point + i);
	}
	printf("���ο��� ���� Sum : %d\n", sum);
	printf("*******************************************\n");
	
	// initialize
	address = point;
	
	printf("�Լ� summary() ȣ��� ���� Sum : %d\n", summary(point, aryLength));
	printf("*******************************************\n");
	
	return 0;
}

//int summary(int arr[], SIZE) 
int summary(int *arr, int SIZE) {
	
	int i, sum = 0;
	
//	printf("%u\n", *arr);

	for( i=0 ; i<SIZE ; i++) {
		sum += *arr++;
	}
	
	return sum;
}
