#include <stdio.h>

void main() {
//    printf("Hello world");
	int sp, st, ln, flag = 0, i, j;
	
	scanf("%d", &ln);
	sp = ln / 2;
	st = 1;
	
	for(i=0; i<ln; i++) {
		
		for(j=0; j<sp; j++) {
			printf("");
		}
		
		for(j=0; j<st; j++) {
			printf("*");
		}
		printf("\n");
		
		if(i==ln/2) flag = 1;
		
		if(flag == 0) {
			sp--;
			st += 2;
		}
		
		else {
			sp++;
			st -= 2;
		}
	}
}
