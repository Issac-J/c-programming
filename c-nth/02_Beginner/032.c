#include <stdio.h>

int main(void) {
	int i = 1;
	int j = 2;
	int k = 7;
	
	if(i == 1) {
		if(j == 2) {
			if(k == 3)
				// k는 7이므로, 다음 문장은 실행되지 않습니다. 
				printf("i=1, j=2, k=3 입니다.\n");
			else if(k == 4)
				// k는 7이므로, 다음 문장은 실행되지 않습니다.
				printf("i=1, j=2, k=4 입니다.\n");
			else if(k == 5)
				// k는 7이므로, 다음 문장은 실행되지 않습니다.
				printf("i=1, j=2, k=5 입니다.\n");
			else
				printf("i=1, j=2, k=%d 입니다.\n", k);
		}
	}
}
