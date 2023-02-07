#include <stdio.h>

int main(void) {
	
	//	pc라는 포인터 변수를 선언하고 100이라는 주소값을 저장한다. 
	//	여기서 100은 주소값을 의미한다.  
	char *pc = (char *)100;
	int *pi = (int *)100;
	double *pd = (double *)100;
	
	printf("%u %u %u\n", pc-1, pc, pc+1);
	printf("%u %u %u\n", pi-1, pi, pi+1);
	printf("%u %u %u\n", pd-1, pd, pd+1);
	
	
	return 0;
}

