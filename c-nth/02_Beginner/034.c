#include <stdio.h>

int main(void) {
	int i = 5;
	
	switch(i) {
		case 1:
			printf("i �� 1�Դϴ�.");
			break;
		case 2:
			printf("i �� 2�Դϴ�.");
			break;
		case 3:
			printf("i �� 3�Դϴ�.");
			break;
		default:
			printf("i �� %d�Դϴ�.", i);
			break;			 
	}
	return 0;
}