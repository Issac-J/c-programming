#include <stdio.h>

int main(void) {
	
	int i, sum = 0;
	int score[] = {89, 76, 54};
	
	printf("첨자\t\t주소\t\t저장값\n");
	printf("----------------------------------------\n");
	
	//	일반적으로 배열을 순회하여 배열 원소의 주소값과 값을 출력. 
	for(i=0 ; i<3 ; i++) {
		printf("%d\t\t%u\t\t%d\n", i, &score[i], score[i]);
	}
	printf("----------------------------------------\n");
	
	//	포인터를 사용하여...
	for(i=0 ; i<3 ; i++) {
		printf("%d\t\t%u\t\t%d\n", i, score + i, *(score + i));
		puts("");
	}

	//	배열 score 에서 배열의 이름 자체인 score 가 배열의 첫 원소의 주소값이다. 
	//	주소값에 1 더하면 다음 주소를 접근할 수 있다.
//	printf("%d %d %d", score, score+1, score+2);
	puts("");
	printf("score\t\t:%u\n", score);
	printf("&score[0]\t:%u\n", &score[0]);

	return 0;
}
