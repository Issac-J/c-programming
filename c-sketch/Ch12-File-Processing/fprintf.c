#include <stdio.h>
#include <stdlib.h>


int main(void) {
	
	char fname[] = "grade.txt";
	char name[30];
	
	int point1, point2, count = 0;
	
	FILE *f;
	
	if( (f = fopen(fname, "w")) == NULL) {
		printf("������ �� �� �����ϴ�.\n");
		exit(1);
	}

	printf("�̸��� ����(�߰�, �⸻)�� �Է��ϼ���.\n");
	//	������ �����͸� �Է� �ޱ�. 
	scanf_s("%s%d%d", name, 30, &point1, &point2);
	
	//	"grade.txt" �� ����.
	count++;
	fprintf(f, "%d %s %d %d\n", count, name, point1, point2);

	//	To close stream.
	fclose(f);
	
	
	if( (f = fopen(fname, "r")) == NULL )  {
		printf("������ �� �� �����ϴ�.\n");
		exit(1);
	}
	
	fscanf(f, "%d %s %d %d\n", &count, name, &point1, &point2);
	
	fprintf(stdout, "\n%6s%16s%10s%8s\n", "��ȣ", "�̸�", "�߰�", "�⸻");
	fprintf(stdout, "%5d%18s%8d%8d\n", count, name, point1, point2);
	
	fclose(f);
		
	
	
	return 0;
}
