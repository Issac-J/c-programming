#include <stdio.h>

enum { Sun = 0, Mon, Tue, Wed, Thr, Fri, Sat };

int main(void) {
	printf("%d ", Sun);
	printf("%d ", Mon);
	printf("%d ", Tue);
	printf("%d ", Wed);
	printf("%d ", Thr);
	printf("%d ", Fri);
	printf("%d ", Sat);
	
	return 0;
}

