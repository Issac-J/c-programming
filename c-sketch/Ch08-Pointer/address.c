#include <stdio.h>

int main(void) {
	
	int input;
	
	printf("���� �Է� : ");
	scanf("%d", &input);
	
	printf("============================================================\n");
	printf("�Է� �� : %d\n", input);
	printf("�ּ� �� : %u(10����) %p(16����)\n", &input, &input);
	printf("�ּ� �� : %d(10����) %#p(16����)\n", &input, &input);
	printf("�ּ� ���� ũ�� : %d\n", sizeof(&input));
	
	return 0;
}
