//	���ڿ��� �����ϴ� �Լ� ����� 

#include <stdio.h> 

#define KOREA "���ѹα�"

char *myStrcpy(char* dest, const char* src);

int main(void) {
	
	//	���ڹ迭�� �̿��� ����.
	char string1[100];
	
	myStrcpy(string1, KOREA);
	
	printf("%s\n", string1);
	
	return 0;
}

char *myStrcpy(char* dest, const char* src) {
	
	//	
	if(dest == '\0' || src == '\0') {
		if( *dest != NULL )	*dest = NULL;
		return NULL;
	}
	
	do {
		*dest++ = *src;
	}
	while(*src++ != NULL);
	
	return dest;
}
