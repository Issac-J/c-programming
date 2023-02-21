//	문자열 출력하기: puts() 

#include <stdio.h>

#define KOREA "대한민국"
#define SUMMER "여름"

int main(void) {
	
	const char* winter = "겨울";
	
	puts(KOREA);
	puts(SUMMER);
	puts(winter);
	
	return 0;
}
