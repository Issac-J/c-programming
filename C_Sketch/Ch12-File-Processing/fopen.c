#include <stdio.h>

int main(void) {
	
	char fname[] = "Basic.txt";
	char name[30] = "홍길동";
	int point = 90;
	
	FILE *f;
	
	if( (f = fopen(fname, "w")) == NULL) {
		printf("파일을 열 수 없습니다.\n");
		exit(1);
	}
	
	fprintf(f, "Name: %s , Point: %d\n", name, point);
	fclose(f);
	
	puts("Please Check Basic.txt File.");
	
	return 0;
}
