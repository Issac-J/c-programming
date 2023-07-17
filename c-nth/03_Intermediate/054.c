//	정수 값 출력하기: printf() 

#include <stdio.h>

int main(void) {
	
	int i = 100;
	int j = 1000;
	int k = 12345;
	
	//	정렬을 사용하지 않는 경우
	printf("[%d]\n", i);	//	[100]
	printf("[%d]\n", j);	//	[1000]
	printf("[%d]\n", k);	//	[12345]
	printf("\n");
	
	//	출력을 5자리로 설정
	printf("[%5d]\n", i);	//	[  100]
	printf("[%5d]\n", j);	//	[ 1000]
	printf("[%5d]\n", k);	//	[12345]
	printf("\n");
	
	//	출력을 10자리로 설정
	printf("[%10d]\n", i);	//	[       100]
	printf("[%10d]\n", j);	//	[      1000]
	printf("[%10d]\n", k);	//	[     12345]
	printf("\n");
	 
	//	출력을 10자리로 설정하고 왼쪽 정렬 (기본 값으로 오른쪽 정렬이다)
	printf("[%-10d]\n", i);	//	[100       ]
	printf("[%-10d]\n", j);	//	[1000      ]
	printf("[%-10d]\n", k);	//	[12345     ]
	printf("\n");
	
	return 0;
}
