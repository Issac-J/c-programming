#include <stdio.h>

int main(void) {
	
	char str[100];
	
	puts("���ڿ��� �Է��� �� Enter Ű�� ġ����.");
	puts("�ƹ� ���ڵ� �Է����� ������ ���α׷��� ����˴ϴ�.");
	
	do {
		gets(str);
		
		if(strlen(str) == 0) break;
		
		strlwr(str);
		puts(str);
	}
	while(1);
	
	return 0;
}
