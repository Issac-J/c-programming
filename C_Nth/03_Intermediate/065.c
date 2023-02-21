#include <stdio.h>
#include <string.h> 

int main(void) {
	
	char string[100];
	
	// 주소를 담을 포인터 변수(ret) 선언. 
	char *ret;
	
	puts("문자열을 입력한 후 Enter 를 눌러주세요.");
	puts("문자열 중에 'h' 가 포함되어 있으면, 프로그램은 종료됩니다.");
	puts("**********************************************************"); 
	
	do {
		// string: string 배열의 첫 번째 주소를 나타낸다. 
		
		/*
			gets 함수 원형: char *gets(char *buffer); 
			gets() 함수:  표준 입력(stdin) 에서 문자열을 입력받아 전달한 메모리에 저장하는 함수			
		*/ 
		gets(string);
		
		/*
			strchr 함수 원형: char *strchr(const char *string, int c);
			strchr 함수
			첫 번째 인자인 string 에서 두번째 인자인 c가 존재하는지 검사를 하고 
			존재하면, 해당 문자가 있는 곳의 포인터를 반환하고
			존재하지 않으면 널포인터를 반환한다. 
			
			 
		*/
		ret = strchr(string, 'h');
		
		if(ret == NULL) {
			puts("문자열 중에 'h' 가 없습니다. ");
		}
		else {
			/*
				ret 는 검색된 주소 이므로, 첫 번째 주소인 string보다 항상 크거나 같다.
			*/ 
			printf("%d 위치에서 'h' 문자를 찾았습니다.\n", ret-string);
			
			// 반복을 멈추는 break; 
			break;
		} 
	}
	// 무한반복 
	while(1);
	
	return 0;
}
