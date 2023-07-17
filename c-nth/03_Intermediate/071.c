// 문자열을 특정 문자로 채우기: strset() 

#include <stdio.h>
#include <string.h>

int main(void) {
	
	char string[100];
	
	puts("문자열을 입력한 후 Enter 를 치세요.");
	puts("아무 문자도 입력하지 않으면 프로그램은 종료됩니다.");
	
	do {
		gets(string);
		
		if(strlen(string) == 0) break;
		
		strnset(string, '*', 5);
		puts(string);
	}
	while(1);
	
	return 0;
}
