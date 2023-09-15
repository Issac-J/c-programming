#include <stdio.h>

#define KOREA "대한민국"
#define BOOK "This is a Book."

const char* SOCCER = "나는 축구를 좋아합니다.";

int main(void) {
	printf("문자열형 상수  KOREA : %s\n", KOREA );
	printf("문자열형 상수   BOOK : %s\n", BOOK );
	printf("문자열형 상수 SOCCER : %s\n", SOCCER );
	return 0;
}
