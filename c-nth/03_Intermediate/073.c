#include <stdio.h>

int main(void) {
	
	char str[100];
	
	puts("문자열을 입력한 후 Enter 키를 치세요.");
	puts("아무 문자도 입력하지 않으면 프로그램은 종료됩니다.");
	
	do {
		gets(str);
		
		if(strlen(str) == 0) break;
		
		strlwr(str);
		puts(str);
	}
	while(1);
	
	return 0;
}
