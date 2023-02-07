#include <stdio.h>

void copyarray(double *source, double *target, int size);

int main(void) {
	
	double ary[5] = {3.12, 5.14, 7.25, 7.48, 5.91};
	double aryCopy[5] = {0.0};
	int aryLength = sizeof(ary) / sizeof(double);
	int i;
	
	double *ptrArray = ary;
	double *ptrArrayCopy = aryCopy;
	
	copyarray(ptrArray, ptrArrayCopy, aryLength);
	
	for(i=0 ; i<aryLength ; i++) {
		printf("%.2f ", aryCopy[i]);
	}
	
	return 0;
}

void copyarray(double *source, double *target, int size) {
	int i ;
	
	for(i=0 ; i<size ; i++) {
		*(target + i) = *(source + i);
	}
	
//	puts("");
//	
//	for(i=0 ; i<size ; i++) {
//		printf("%.2f ", *(target + i));
//	}
}
