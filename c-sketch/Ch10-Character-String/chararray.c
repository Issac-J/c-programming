#include <stdio.h>

int main(void) {
	int ch = 'A';
	
	char java[] = {'J', 'A', 'V', 'A', '\0'};
	char c[] = "C Language";
	char csharp[3];
	
	csharp[0] = 'C';
	csharp[1] = '#';
	csharp[2] = '\0';
	
	printf("%c %d\n", ch, ch);
	printf("%c%c\n", csharp[0], csharp[1]);
	printf("%s %s\n", java, c);
	puts(csharp);
	printf(c); printf("\n");
	
	return 0;
}
