#include <stdio.h>

#define ASCII_BEGIN 0
#define ASCII_END 255

int main(void) {
	int i;
	
	for(i=ASCII_BEGIN; i<= ASCII_END; i++) {
		printf("ASCII 코드 %3d 는 문자 '%c' 입니다.\n", i, i);
	}
	return 0;
}
