#include <stdio.h>

#define true 1
#define false 0

typedef int bool;

int main(void) {
	bool bCondition;
	bCondition = true;
	
	if(bCondition == true) {
		printf("���ǽ��� true �Դϴ�.\n");
	}
	
	return 0;
}
