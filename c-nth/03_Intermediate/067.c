// ���ڿ� �߿��� ��ġ���� �ʴ� ù ������ ��ġ ���ϱ�: strspn() 

#include <stdio.h>
#include <string.h>

int main(void) {
	
	char *string = "this is a very Good!";
	char *strCharSet = "abcdefghijklmnopqrstuvwxyz ";
	unsigned int pos;
	
	pos = strspn(string, strCharSet);
	
	puts("0         1         2         3     ");
	puts("012345678901234567890123456789012345");
	puts(string);
	puts(strCharSet);
	
	printf("%d ��ġ���� ��ġ���� �ʴ� ù ���ڸ� ã�ҽ��ϴ�.\n", pos);
	
	return 0;
}
