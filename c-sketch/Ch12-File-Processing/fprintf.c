#include <stdio.h>
#include <stdlib.h>


int main(void) {
	
	char fname[] = "grade.txt";
	char name[30];
	
	int point1, point2, count = 0;
	
	FILE *f;
	
	if( (f = fopen(fname, "w")) == NULL) {
		printf("파일을 열 수 없습니다.\n");
		exit(1);
	}

	printf("이름과 성적(중간, 기말)을 입력하세요.\n");
	//	저장할 데이터를 입력 받기. 
	scanf_s("%s%d%d", name, 30, &point1, &point2);
	
	//	"grade.txt" 에 저장.
	count++;
	fprintf(f, "%d %s %d %d\n", count, name, point1, point2);

	//	To close stream.
	fclose(f);
	
	
	if( (f = fopen(fname, "r")) == NULL )  {
		printf("파일을 열 수 없습니다.\n");
		exit(1);
	}
	
	fscanf(f, "%d %s %d %d\n", &count, name, &point1, &point2);
	
	fprintf(stdout, "\n%6s%16s%10s%8s\n", "번호", "이름", "중간", "기말");
	fprintf(stdout, "%5d%18s%8d%8d\n", count, name, point1, point2);
	
	fclose(f);
		
	
	
	return 0;
}
