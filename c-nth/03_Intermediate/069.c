// ���ڿ��� �����ڷ� �и��ϱ� 2: strpbrk()  

#include <stdio.h>
#include <string.h>

#define TOKEN " "

int main(void) {
	
	char string[100];
	char *pos;
	
	puts("���ڿ��� �Է��� �� Enter �� ġ����.");
	
	gets(string);
	
	pos = strpbrk(string, TOKEN);
	
	while(pos != NULL) {
		puts(pos++);
		
		pos = strpbrk(pos, TOKEN);
	}
	
	return 0;
}
