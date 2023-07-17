//	file: struct.c

#include <stdio.h>
#include <string.h>

struct account {
	char name[12];		//	°èÁÂÁÖ ÀÌ¸§
	int actnum;			//	°èÁÂ ¹øÈ£
	double balance;		//	°èÁÂ ÀÜ°í
};

int main(void) {
	struct account mine = {"È«±æµ¿", 1001, 300000};
	struct account yours;
	
	strcpy_s(yours.name, 12, "ÀÓ²©Á¤");
	yours.actnum = 1002;
	yours.balance = 500000;
	
	printf("±¸Á¶Ã¼ Å©±â: %d\n", sizeof(mine));
	printf("%s	%d	%.2f\n", mine.name, mine.actnum, mine.balance);
	printf("%s	%d	%.2f\n", yours.name, yours.actnum, yours.balance);
	
	return 0;
}
