//	문자 입력받기: putch()
#include <stdio.h>

// print 함수를 선언 
int print(char *string);

int main(void) {
	print("This is a putch function!!!");
	
	return 0;
}

int print(char *string) {
	int strLength = 0;
	
	/*
		문자열은 NULL로 종결되기 때문에 
		현재 string이 가리키는 번지의 값이 NULL 인지를 확인합니다.
		string이 가리는 번지의 값이 NULL이 될 때까지 while 문을 반복합니다.  
	*/
	while( *string != (char)NULL) {
		
		/*
			현재 string이 가리키는 번지의 문자를 출력합니다. 
			string: 메모리주소(번지)를 저장하는 변수 
			*string: 메모리주소가 가리키는 값 
		*/
		putch(*string);
		string++;
		strLength++;
	}
	
	putch('\r');
	putch('\n');
	
	return strLength;
}
