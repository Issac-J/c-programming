#include <stdio.h>

#define ASCII_BEGIN 0
#define ASCII_END 255

int main(void) {
	int i;
	
	for(i=ASCII_BEGIN; i<= ASCII_END; i++) {
		printf("ASCII �ڵ� %3d �� ���� '%c' �Դϴ�.\n", i, i);
	}
	return 0;
}