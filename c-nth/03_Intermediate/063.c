#include <stdio.h>
#include <string.h>

int main(void) {
	
	char string[100];
	
	printf("������ �Է�: ");
	
	do {
		gets(string);
		
		if(strlen(string) == 0) {
			break;
		}
		
		printf("���ڿ� ����: %d\n", strlen(string));
		printf("---------------------------------\n");
	}
	while(1);
	
	return 0;
}
