#include <stdio.h>
#include <string.h> 

int main(void) {
	
	char string[100];
	
	// �ּҸ� ���� ������ ����(ret) ����. 
	char *ret;
	
	puts("���ڿ��� �Է��� �� Enter �� �����ּ���.");
	puts("���ڿ� �߿� 'h' �� ���ԵǾ� ������, ���α׷��� ����˴ϴ�.");
	puts("**********************************************************"); 
	
	do {
		// string: string �迭�� ù ��° �ּҸ� ��Ÿ����. 
		
		/*
			gets �Լ� ����: char *gets(char *buffer); 
			gets() �Լ�:  ǥ�� �Է�(stdin) ���� ���ڿ��� �Է¹޾� ������ �޸𸮿� �����ϴ� �Լ�			
		*/ 
		gets(string);
		
		/*
			strchr �Լ� ����: char *strchr(const char *string, int c);
			strchr �Լ�
			ù ��° ������ string ���� �ι�° ������ c�� �����ϴ��� �˻縦 �ϰ� 
			�����ϸ�, �ش� ���ڰ� �ִ� ���� �����͸� ��ȯ�ϰ�
			�������� ������ �������͸� ��ȯ�Ѵ�. 
			
			 
		*/
		ret = strchr(string, 'h');
		
		if(ret == NULL) {
			puts("���ڿ� �߿� 'h' �� �����ϴ�. ");
		}
		else {
			/*
				ret �� �˻��� �ּ� �̹Ƿ�, ù ��° �ּ��� string���� �׻� ũ�ų� ����.
			*/ 
			printf("%d ��ġ���� 'h' ���ڸ� ã�ҽ��ϴ�.\n", ret-string);
			
			// �ݺ��� ���ߴ� break; 
			break;
		} 
	}
	// ���ѹݺ� 
	while(1);
	
	return 0;
}
