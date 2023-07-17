#include <stdio.h>

int main(void) {
	
	int i = 0;
	char *lang = "java";
	
	for(i=0; i<4; i++) {
		printf("%u\n", lang+i);
	}
	
	printf("-----------------------\n");
	
	printf("%u\n", lang);
	printf("%c\n", *lang);
	printf("%u %u %u %u\n", lang, lang+1, lang+2, lang+3);
	printf("%c %c %c %c\n", lang[0], lang[1], lang[2], lang[3]);
	
	printf("-----------------------\n");
	
	for(i=0; i<4; i++) {
		printf("lang value : %u\n", lang[i]);
	}

//	for(i=0; i<4; i++) {
//		
//		printf("%c ", lang[i]);
//	}
	
	return 0;
}
