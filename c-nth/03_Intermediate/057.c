//	���ڿ� �����ϱ�: strcpy() 

#include <stdio.h>
#include <string.h>

#define KOREA "���ѹα�"

int main(void) {
	char *string1;
	char string2[100];
	
	//	Error �߻� : string1 �� �ʱ�ȭ���� �ʾұ� ������ ����� �߻� 
//	strcpy(string1, KOREA);
//	puts(string1);
	
	strcpy(string2, KOREA);
	puts(string2);
	
	strcpy(string2, "��");
	puts(string2);
	
	return 0;
}
