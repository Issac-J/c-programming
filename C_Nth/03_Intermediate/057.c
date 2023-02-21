//	문자열 복사하기: strcpy() 

#include <stdio.h>
#include <string.h>

#define KOREA "대한민국"

int main(void) {
	char *string1;
	char string2[100];
	
	//	Error 발생 : string1 을 초기화하지 않았기 때문에 생기는 발생 
//	strcpy(string1, KOREA);
//	puts(string1);
	
	strcpy(string2, KOREA);
	puts(string2);
	
	strcpy(string2, "봄");
	puts(string2);
	
	return 0;
}
