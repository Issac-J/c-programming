#include <stdio.h>

int main(void) {
	int i = 1; 
	int hap = 0;
	
	while(i<= 10) {
		hap = hap + i;
		i++;
	}
	printf("hap = %d\n", hap);
	return 0;
}
