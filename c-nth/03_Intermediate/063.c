#include <stdio.h>
#include <string.h>

int main(void) {
	
	char string[100];
	
	printf("문장을 입력: ");
	
	do {
		gets(string);
		
		if(strlen(string) == 0) {
			break;
		}
		
		printf("문자열 길이: %d\n", strlen(string));
		printf("---------------------------------\n");
	}
	while(1);
	
	return 0;
}
