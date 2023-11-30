// file: multipointer.c

#include <stdio.h>

int main(void) {
	int i = 20;
	int *pi = &i;
	int **dpi = &pi;
	
	printf("%p\t%p\t%p\n", &i, pi, *dpi);
	
	i = i + 2;
	printf("%d\t%d\t%d\n", i, *pi, **dpi);
	
	*pi = i + 2;
	printf("%d\t%d\t%d\n", i, *pi, **dpi);
	
	**dpi = *pi + 2;
	printf("%d\t%d\t%d\n", i, *pi, **dpi);
	
	return 0;
}
