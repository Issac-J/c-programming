//	문자열을 복사하는 함수 만들기 

#include <stdio.h> 

#define KOREA "대한민국"

char *myStrcpy(char* dest, const char* src);

int main(void) {
	
	//	문자배열을 이용한 선언.
	char string1[100];
	
	myStrcpy(string1, KOREA);
	
	printf("%s\n", string1);
	
	return 0;
}

char *myStrcpy(char* dest, const char* src) {
	
	//	
	if(dest == '\0' || src == '\0') {
		if( *dest != NULL )	*dest = NULL;
		return NULL;
	}
	
	do {
		*dest++ = *src;
	}
	while(*src++ != NULL);
	
	return dest;
}
