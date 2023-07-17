//	문자열 입력받기: gets() 

#include <stdio.h>

int countChar(char *str);

int main(void) {
	
	char string[100];
	char *ret;
	
	ret = gets(string);
	
	if(ret != NULL) {
		printf("문자 'a' 의 갯수는 %d 입니다.\n", countChar(ret));
	}
	
	
	return 0;
}

int countChar(char *str)  {
	int count;
	
	while( *str != '\0' ) {
		if( *str++ == 'a') count++;
	}
	
	return count;
}
