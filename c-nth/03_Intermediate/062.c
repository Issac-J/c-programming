#include <stdio.h>
#include <string.h>

int main(void) {
	char string1[100];
	char string2[100];
	
	printf("첫번째 단어를 입력: ");
	gets(string1);
	
	printf("두번째 단어를 입력: ");
	gets(string2);
	
	strcat(string1, string2);
	
	puts(string1);
	
	return 0;
}
