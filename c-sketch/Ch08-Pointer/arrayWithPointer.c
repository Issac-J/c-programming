#include <stdio.h>

int main(void) {
	
	int i, sum = 0;
	int score[] = {89, 76, 54};
	
	printf("÷��\t\t�ּ�\t\t���尪\n");
	printf("----------------------------------------\n");
	
	//	�Ϲ������� �迭�� ��ȸ�Ͽ� �迭 ������ �ּҰ��� ���� ���. 
	for(i=0 ; i<3 ; i++) {
		printf("%d\t\t%u\t\t%d\n", i, &score[i], score[i]);
	}
	printf("----------------------------------------\n");
	
	//	�����͸� ����Ͽ�...
	for(i=0 ; i<3 ; i++) {
		printf("%d\t\t%u\t\t%d\n", i, score + i, *(score + i));
		puts("");
	}

	//	�迭 score ���� �迭�� �̸� ��ü�� score �� �迭�� ù ������ �ּҰ��̴�. 
	//	�ּҰ��� 1 ���ϸ� ���� �ּҸ� ������ �� �ִ�.
//	printf("%d %d %d", score, score+1, score+2);
	puts("");
	printf("score\t\t:%u\n", score);
	printf("&score[0]\t:%u\n", &score[0]);

	return 0;
}
