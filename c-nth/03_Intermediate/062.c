#include <stdio.h>
#include <string.h>

int main(void) {
	char string1[100];
	char string2[100];
	
	printf("ù��° �ܾ �Է�: ");
	gets(string1);
	
	printf("�ι�° �ܾ �Է�: ");
	gets(string2);
	
	strcat(string1, string2);
	
	puts(string1);
	
	return 0;
}
