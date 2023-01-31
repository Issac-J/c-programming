// file: globalvar.c

#include <stdio.h>

double getArea(double);
double getCircum(double);

//	전역 변수 선언.
double PI = 3.14;

// 전역 변수 선언. 초기화 하지 않은 상태로 선언. 
int gi;

int main(void) {
	//	지역변수 선언
	double r = 5.87;
	
	//	전역변수 PI와 같은 이름의 지역변수 선언.
	const double PI = 3.141592;
	
	printf("면적: %.2f\n", getArea(r));
	printf("둘레1: %.2f\n", 2*PI*r);
	printf("둘레2: %.2f\n", getCircum(r));
	printf("PI: %f\n", PI);
	//	전역변수와 동일한 이름의 지역변수가 있기 때문에 지역 변수(3.141592)를 참조한다. 
	
	printf("gi: %d\n", gi);
	
	return 0;
} 

double getArea(double r) {
	// 전역변수 PI 참조 
	return r*r*PI;
}
