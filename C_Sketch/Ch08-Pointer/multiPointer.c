#include <stdio.h>

int main(void) {
	
	int i = 20;
	int *pi = &i;
	int **dpi = &pi;
	
	//	&i, pi, *dpi 는 모두 변수 i 를 참조하는 방식이다. 
	// i 의 주소 값을 참조하는 방식 
	printf("i의 주소 : %u %u %u\n", &i, pi, *dpi);
	
	//	i의 값을 참조하는 방식 
	printf("i의 값 : %d %d %d\n", i, *pi, **dpi);
	
	//	20 + 2 를 *pi 에 저장한다.  
	//	*pi 는 i 를 말하는 거니까 i = i + 2; 
	//	i(20) 에 2를 더한 값을 i 에 다시 할당. 
	*pi = i + 2;
	printf("%d %d %d\n", i, *pi, **dpi);
	
	//	*pi는 i 를 말하는 거니까 => **dpi 에 20 + 2 를 할당한다.
	// 	**dpi 에서 *dpi 는 포인터 변수 pi의 주소값이다. 
	//	결론적으로 **dpi 는 i 의 값을 참조한다. 
	**dpi = *pi + 2;
	printf("%d %d %d\n", i, *pi, **dpi);
	
	return 0;
}

/*
	간접연산자 * 는 포인터가 가리키는 변수의 값을 읽어오는 역할을 한다.  
*/
