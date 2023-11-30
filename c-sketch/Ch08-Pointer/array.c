// file : array.c

#include <stdio.h>

#define SIZE 3

int main(void) {
	int i, sum = 0;
	int score[] = {89, 78, 76};
	
	printf("Index\tAddress\tValue\n");
	
	for(i=0; i<SIZE; i++) {
		printf("%d\t%d\t%d\n", i, score+i, *(score+i));
	}
	
	puts("");
	
	printf("score: %d\n", score);
	printf("&score[0]: %d\n", &score[0]);
	
	return 0;
}
