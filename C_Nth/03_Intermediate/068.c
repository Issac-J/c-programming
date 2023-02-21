// 문자열을 구분자로 분리하기 1: strtok 

#include <stdio.h> 
#include <string.h>

#define TOKEN " "

int main(void) {

	char string[100];
	char *token;
	
	puts("문자열을 입력한 후 Enter 키를 누르세요.");
	
	gets(string);
	
	/*
		strtok 함수 원형: char *strtok(char *strToken, const char *strDelimit);
		strToken 은 원본 문자열이며, strDelimit 는 구분 문자 또는 문자 Set 이다. 
		
		strtok() 함수는 다음과 같이 동작한다.
		1. 문자열이 저장되어 있는 배열 변수 string에서 TOKEN 에 해당하는 공백을 찾는다. 
		2. 공백을 찾은 경우, 공백이 있는 자리에 NULL을 넣은 후 문자열의 선두 번지를 반환한다. 
		3. 공백이 없을 경우, 문자 배열 변수 string의 선두 번지를 반환한다. 
		4. 반환 값이 NULL 이 아닌지 비교한다. (while 의 조건문) 
		   NULL 이면, while 문 종료.
		   NULL 이 아니면 while 문 반복 실행. 
		5. 분리된 문자열을 출력한다. 
		6. 1번에서 공백을 찾은 다음 번지부터 TOKEN 에 해당하는 공백을 찾는다. 
		7. 공백을 찾은 경우, 공백이 있는 자리에 NULL 을 넣은 후, 6번에서 검색을 시작한 번지를 반환한다. 
		8. 공백이 없는 경우, 6번에서 검색을 시작한 번지를 반환한다.
		9. 4번에서 9번까지를 string의 문자열이 모두 분리될 때까지 반복실행한다.  
	*/
	token = strtok(string, TOKEN);
	puts(token);
	puts("");
	
	while(token != NULL) {
		puts(token);
		
		//	strtok 함수는 내부적으로 이전에 검색한 위치를 저장하고 있다. 
		//	그러므로 string 이 아닌 NULL 을 strtok() 함수에 넘겨주면, 검색된 다음 위치부터 자동으로 검색한다.  
		token = strtok(NULL, TOKEN);
	}
	
	return 0;
}
