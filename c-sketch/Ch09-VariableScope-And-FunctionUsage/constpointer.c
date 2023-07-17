//	file: constpointer.c

#include <stdio.h>

void multiply(double *, const double *, const double *);
void devideandincrement(double *, double *, double *);

int main(void) {
	double m = 0, n = 0, mult = 0, dev = 0;
	
	printf("두 실수 입력    : ");
	scanf("%lf %lf", &m, &n);
	
//	printf("입력받은 두 실수: %lf %lf\n", m, n);
	
	multiply(&mult, &m, &n);
	devideandincrement(&dev, &m, &n);
	
	printf("두 실수의 곱    : %.2f\n", mult);
	printf("두 실수의 나눔  : %.2f\n", dev);
	printf("연산 후 두 실수 : %.2f %.2f\n", m, n);
	
	return 0;
}

void multiply(double *result, const double *a, const double *b) {
	*result = *a * *b;
	
	// 오류 발생
	// *a = *a + 1;
	// *b = *b + 1;
}

void devideandincrement(double *result, double *a, double *b) {
	*result = *a / *b;
	++*a;
	(*b)++;
}


/*
Keyword : const

포인터를 매개변수로 이용하면 수정된 결과를 받을 수 있어 편리하다. 
그러나 이러한 참조에 의한 호출은 매개변수가 가리키는 변수 값이 원하지 않는 값으로 수정될 수 있다. 

이러한 포인터 인자의 잘못된 수정을 미리 예방하는 방법이 있다. 

즉 수정을 원하지 않는 함수의 인자 앞에 키워드 const를 삽입한다.
키워드 const는 인자인 포인터 변수가 가리키는 내용을 수정할 수 없도록 한다.  
*/
