#include <stdio.h>

int main(void) {
	
	char fname[] = "Basic.txt";
	char name[30] = "ȫ�浿";
	int point = 90;
	
	FILE *f;
	
	if( (f = fopen(fname, "w")) == NULL) {
		printf("������ �� �� �����ϴ�.\n");
		exit(1);
	}
	
	fprintf(f, "Name: %s , Point: %d\n", name, point);
	fclose(f);
	
	puts("Please Check Basic.txt File.");
	
	return 0;
}
