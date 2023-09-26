#include <stdio.h>

struct tagSungJuk {
	int korean;
	int english;
	int math;
};

int main(void) {
	struct tagSungJuk SJ;
	
	SJ.korean = 100;
	SJ.english = 95;
	SJ.math = 99;
	
	printf("¼ºÀû ÃÑÇÕ : %d\n", SJ.korean + SJ.english + SJ.math);
	return 0;
}
