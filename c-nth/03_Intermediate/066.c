// 066: ���ڿ� �߿��� ��ġ�Ǵ� ù ������ ��ġ ���ϱ�(strcspn) 

#include <stdio.h>
#include <string.h>

int main(void) {
	/*
		  
	*/
	
	
	//	���ڿ� ����� ����Ű�� ������ ������ �����Ѵ�.
	char *string = "This is a string $$$";
	
	//	���ڿ� ����� ����Ű�� ������ ������ �����Ѵ�.
	char *strCharSet = "~!@#$%^&*()_+-={}[]:;'<>./?";
	
	//	�˻��� ������ ��ġ�� ������ ������ �����Ѵ�.  
	unsigned int pos;
	
	/*
		strcspn �Լ��� ���ڿ�(string)�� �޾Ƽ� ���ڵ�(strCharSet)�� �˻��Ѵ�.
		strCharSet ���ڿ��� �ִ� ���ڰ� string���� �˻��ȴٸ�, �� ��ġ(index)�� ��ȯ�Ѵ�. 
	*/
	pos = strcspn(string, strCharSet);
//	printf("%d\n",pos);
	
	puts("0         1         2         3     ");
	puts("012345678901234567890123456789012345");
	
	//	���ڿ��� ����ϱ� ���ؼ� puts �Լ��� ���
	//	puts �Լ��� �ּҸ� �Ű������� �ޱ� ������ 
	//	������ ������ string �� �����Ѵ�.
	puts(string);
	puts(strCharSet);
	
	printf("%d ��ġ���� ��ġ�Ǵ� ù ���ڸ� ã�ҽ��ϴ�.\n", pos);
	
	return 0;
}

