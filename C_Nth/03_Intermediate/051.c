#include <stdio.h>

#define ENTER 13

int main(void) {
	
	int ch;
	
	printf("아스키 코드로 변환할 키를 누르세요...\n");
	printf("ENTER 키를 누르면 프로그램은 종료됩니다.\n");
	printf("\n");
	
	do {
		ch = getch();
		
		if(ch != ENTER) {
			printf("Char: %c \t ASCII Code: %d\n", ch, ch);
		}
	}
	while(ch != ENTER);
	
	return 0;
}

/*
	함수원형 : int getch(void)
*/
