// ���ڿ��� �����ڷ� �и��ϱ� 1: strtok 

#include <stdio.h> 
#include <string.h>

#define TOKEN " "

int main(void) {

	char string[100];
	char *token;
	
	puts("���ڿ��� �Է��� �� Enter Ű�� ��������.");
	
	gets(string);
	
	/*
		strtok �Լ� ����: char *strtok(char *strToken, const char *strDelimit);
		strToken �� ���� ���ڿ��̸�, strDelimit �� ���� ���� �Ǵ� ���� Set �̴�. 
		
		strtok() �Լ��� ������ ���� �����Ѵ�.
		1. ���ڿ��� ����Ǿ� �ִ� �迭 ���� string���� TOKEN �� �ش��ϴ� ������ ã�´�. 
		2. ������ ã�� ���, ������ �ִ� �ڸ��� NULL�� ���� �� ���ڿ��� ���� ������ ��ȯ�Ѵ�. 
		3. ������ ���� ���, ���� �迭 ���� string�� ���� ������ ��ȯ�Ѵ�. 
		4. ��ȯ ���� NULL �� �ƴ��� ���Ѵ�. (while �� ���ǹ�) 
		   NULL �̸�, while �� ����.
		   NULL �� �ƴϸ� while �� �ݺ� ����. 
		5. �и��� ���ڿ��� ����Ѵ�. 
		6. 1������ ������ ã�� ���� �������� TOKEN �� �ش��ϴ� ������ ã�´�. 
		7. ������ ã�� ���, ������ �ִ� �ڸ��� NULL �� ���� ��, 6������ �˻��� ������ ������ ��ȯ�Ѵ�. 
		8. ������ ���� ���, 6������ �˻��� ������ ������ ��ȯ�Ѵ�.
		9. 4������ 9�������� string�� ���ڿ��� ��� �и��� ������ �ݺ������Ѵ�.  
	*/
	token = strtok(string, TOKEN);
	puts(token);
	puts("");
	
	while(token != NULL) {
		puts(token);
		
		//	strtok �Լ��� ���������� ������ �˻��� ��ġ�� �����ϰ� �ִ�. 
		//	�׷��Ƿ� string �� �ƴ� NULL �� strtok() �Լ��� �Ѱ��ָ�, �˻��� ���� ��ġ���� �ڵ����� �˻��Ѵ�.  
		token = strtok(NULL, TOKEN);
	}
	
	return 0;
}
