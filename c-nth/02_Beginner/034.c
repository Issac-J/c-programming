#include <stdio.h>

int main(void) {
	int i = 5;
	
	switch(i) {
		case 1:
			printf("i 는 1입니다.");
			break;
		case 2:
			printf("i 는 2입니다.");
			break;
		case 3:
			printf("i 는 3입니다.");
			break;
		default:
			printf("i 는 %d입니다.", i);
			break;			 
	}
	return 0;
}
