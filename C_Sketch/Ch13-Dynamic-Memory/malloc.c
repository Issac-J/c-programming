#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
	int *pi = NULL;
	
	if( ((pi = (int *)malloc(sizeof(int)))) == NULL) {
		printf("메모리 할당에 문제가 있습니다.");
		exit(1);
	}
	
	*pi = 3;
	
	printf("*pi = %d\n", *pi);
	printf("pi = %d\n", pi);
	
	free(pi);
	
	return 0;
}
