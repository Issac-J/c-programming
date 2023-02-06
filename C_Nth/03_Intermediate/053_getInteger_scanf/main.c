//정수값 입력 받기 : scanf()

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count;
    int tmp;
    int total = 0;

    for(count = 1; count <= 3; count++) {
        printf("%d 번째 정수 값 입력 : ", count);

        scanf("%d", &tmp);

        total += tmp;

        printf("입력 값 : %d, 총합 : %d\n", tmp, total);
    }

    printf("Total : %d\n", total);

    return 0;
}
