#include <stdio.h>

void increment(int *p, int size, int n);

int main(void) {
	
	int data[] = {3, 21, 35, 57, 24, 82, 8};
	int dataLength = sizeof(data) / sizeof(int);
	int i, num;
	
	//	Pointer
	int *ptrData = data; 
	
	printf("증가시킬 n  : ");
	scanf("%d", &num);
	
	increment(ptrData, dataLength, num);
	
	for( i=0 ; i<dataLength ; i++ ) {
		printf("%d ", *(ptrData + i));
	}
	printf("\n");
	
	return 0;
}

void increment(int *p, int size, int n) {
	int i;
	
	for( i=0 ; i<size ; i++) {
		*(p + i) += n;
	}
}
