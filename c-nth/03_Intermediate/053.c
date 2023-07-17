//	정수 값 입력받기: scanf() 

#include <stdio.h>

int main(void) {
	
	int i, tmp;
	int total = 0;
	
	for( i=0 ; i<3 ; i++) {
		printf("%d 번째 정수값을 입력한 후 Enter 키를 누르세요. \n", i + 1);
		scanf("%d", &tmp);
		
		total += tmp;
		
		printf("입력 값: %d \t Total: %d\n", tmp, total);
		printf("\n");
	}
	printf("읽은 정수의 총합: %d\n", total);
	
	return 0;
}
