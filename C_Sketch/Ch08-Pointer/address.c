#include <stdio.h>

int main(void) {
	
	int input;
	
	printf("정수 입력 : ");
	scanf("%d", &input);
	
	printf("============================================================\n");
	printf("입력 값 : %d\n", input);
	printf("주소 값 : %u(10진수) %p(16진수)\n", &input, &input);
	printf("주소 값 : %d(10진수) %#p(16진수)\n", &input, &input);
	printf("주소 값의 크기 : %d\n", sizeof(&input));
	
	return 0;
}
