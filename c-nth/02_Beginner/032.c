#include <stdio.h>

int main(void) {
	int i = 1;
	int j = 2;
	int k = 7;
	
	if(i == 1) {
		if(j == 2) {
			if(k == 3)
				// k�� 7�̹Ƿ�, ���� ������ ������� �ʽ��ϴ�. 
				printf("i=1, j=2, k=3 �Դϴ�.\n");
			else if(k == 4)
				// k�� 7�̹Ƿ�, ���� ������ ������� �ʽ��ϴ�.
				printf("i=1, j=2, k=4 �Դϴ�.\n");
			else if(k == 5)
				// k�� 7�̹Ƿ�, ���� ������ ������� �ʽ��ϴ�.
				printf("i=1, j=2, k=5 �Դϴ�.\n");
			else
				printf("i=1, j=2, k=%d �Դϴ�.\n", k);
		}
	}
}
