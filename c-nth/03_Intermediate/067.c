// 문자열 중에서 일치되지 않는 첫 문자의 위치 구하기: strspn() 

#include <stdio.h>
#include <string.h>

int main(void) {
	
	char *string = "this is a very Good!";
	char *strCharSet = "abcdefghijklmnopqrstuvwxyz ";
	unsigned int pos;
	
	pos = strspn(string, strCharSet);
	
	puts("0         1         2         3     ");
	puts("012345678901234567890123456789012345");
	puts(string);
	puts(strCharSet);
	
	printf("%d 위치에서 일치되지 않는 첫 문자를 찾았습니다.\n", pos);
	
	return 0;
}
