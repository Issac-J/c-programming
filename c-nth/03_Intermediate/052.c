//	���� �Է¹ޱ�: putch()
#include <stdio.h>

// print �Լ��� ���� 
int print(char *string);

int main(void) {
	print("This is a putch function!!!");
	
	return 0;
}

int print(char *string) {
	int strLength = 0;
	
	/*
		���ڿ��� NULL�� ����Ǳ� ������ 
		���� string�� ����Ű�� ������ ���� NULL ������ Ȯ���մϴ�.
		string�� ������ ������ ���� NULL�� �� ������ while ���� �ݺ��մϴ�.  
	*/
	while( *string != (char)NULL) {
		
		/*
			���� string�� ����Ű�� ������ ���ڸ� ����մϴ�. 
			string: �޸��ּ�(����)�� �����ϴ� ���� 
			*string: �޸��ּҰ� ����Ű�� �� 
		*/
		putch(*string);
		string++;
		strLength++;
	}
	
	putch('\r');
	putch('\n');
	
	return strLength;
}
