//	���ڿ� �Է¹ޱ�: gets() 

#include <stdio.h>

int countChar(char *str);

int main(void) {
	
	char string[100];
	char *ret;
	
	ret = gets(string);
	
	if(ret != NULL) {
		printf("���� 'a' �� ������ %d �Դϴ�.\n", countChar(ret));
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
