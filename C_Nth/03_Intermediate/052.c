//	문자 입력받기: putch()  

#include <stdio.h>

int print(char *string);

int main(void) {
	
	print("This is a putch function!!!");
	
	return 0;
}

int print(char *string) {
	
	int strLength = 0;
	
	while( *string != (char)NULL) {
		putch(*string);
		string++;
		strLength++;
	}
	
	putch('\r');
	putch('\n');
	
	return strLength;
}
