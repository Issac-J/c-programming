// ���ڿ��� Ư�� ���ڷ� ä���: strset() 

#include <stdio.h>
#include <string.h>

int main(void) {
	
	char string[100];
	
	puts("���ڿ��� �Է��� �� Enter �� ġ����.");
	puts("�ƹ� ���ڵ� �Է����� ������ ���α׷��� ����˴ϴ�.");
	
	do {
		gets(string);
		
		if(strlen(string) == 0) break;
		
		strset(string, string[0]);
		puts(string);
	}
	while(1);
	
	return 0;
}
