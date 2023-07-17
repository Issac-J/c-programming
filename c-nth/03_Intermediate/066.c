// 066: 문자열 중에서 일치되는 첫 문자의 위치 구하기(strcspn) 

#include <stdio.h>
#include <string.h>

int main(void) {
	/*
		  
	*/
	
	
	//	문자열 상수를 가리키는 포인터 변수를 선언한다.
	char *string = "This is a string $$$";
	
	//	문자열 상수를 가리키는 포인터 변수를 선언한다.
	char *strCharSet = "~!@#$%^&*()_+-={}[]:;'<>./?";
	
	//	검색된 문자의 위치를 저장할 변수를 선언한다.  
	unsigned int pos;
	
	/*
		strcspn 함수는 문자열(string)을 받아서 문자들(strCharSet)을 검색한다.
		strCharSet 문자열에 있는 문자가 string에서 검색된다면, 그 위치(index)를 반환한다. 
	*/
	pos = strcspn(string, strCharSet);
//	printf("%d\n",pos);
	
	puts("0         1         2         3     ");
	puts("012345678901234567890123456789012345");
	
	//	문자열을 출력하기 위해서 puts 함수를 사용
	//	puts 함수는 주소를 매개변수로 받기 때문에 
	//	포인터 변수인 string 을 전달한다.
	puts(string);
	puts(strCharSet);
	
	printf("%d 위치에서 일치되는 첫 문자를 찾았습니다.\n", pos);
	
	return 0;
}

