#include <stdio.h>

int main(void) {
	char test = 'A';
	char c[4] = {'A', '\0', '\0', '\0'}; 
	int *pi = &c[0];
	
	printf("c[0] 狼 林家 : %p\n", &c[0]);	// 000000000062FE10
	printf("c[1] 狼 林家 : %p\n", &c[1]);	// 000000000062FE11
	printf("c[2] 狼 林家 : %p\n", &c[2]);	// 000000000062FE12
	printf("c[3] 狼 林家 : %p\n", &c[3]);	// 000000000062FE13
	
//	printf("%d %c\n", *pi, *pi);
	printf("%d %c\n", test, test);
	
//	printf("%d %c\n", (int)c[0], c[0]);
//	printf("%d %c\n", *pi, (char) *pi);
	
	return 0;
}
