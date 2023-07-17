#include <stdio.h>

int main(void) {
	
	int i, sum = 0;
	int pointArr[] = {97, 68, 14, 54, 37};
	int *address = pointArr;
	int arrLength = sizeof(pointArr) / sizeof(int);
	
//	printf("%u %d\n", address, arrLength);
	
	
	//	일반적으로 배열의 모든 원소들의 합을 구하는 방식 
	for(i=0 ; i<arrLength ; i++) {
		sum += pointArr[i];
	}
	printf("Sum : %d\n", sum);
	printf("----------------------\n");
	
	//	포인터를 이용하여 배열의 모든 원소들의 합을 구하는 방식 
	i = 0, sum = 0;
	for(i=0 ; i<arrLength; i++) {
		sum += *(address + i);
		//	가능 : sum += *(address++);
		//	가능 : sum += *(pointArr + i);
	}
	printf("Sum : %d\n", sum);
	printf("----------------------\n");
	
	return 0;
}
