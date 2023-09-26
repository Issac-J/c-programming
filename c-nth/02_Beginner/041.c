#include <stdio.h>

int main(void) {
	int saram_A = 0;
	int saram_B = 0;
	
	int *ptra;
	int *ptrb;
	
	ptra = &saram_A;
	*ptra = 1;
	printf("saram_A: %d  *ptra: %d\n", saram_A, *ptra);
	
	ptrb = &saram_A;
	*ptrb = 2;
	printf("saram_A: %d  *ptra: %d  *ptrb: %d\n", saram_A, *ptra, *ptrb);
	
	return 0;
}
