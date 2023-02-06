#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 100;
    int j = 1000;
    int k = 12345;

    //  정렬을 사용하지 않는 경우,
    printf("[%d]\n[%d]\n[%d]\n", i, j, k);

    //  출력을 5자리로 설정.
    printf("[%5d]\n[%5d]\n[%5d]\n", i, j, k);

    //  출력을 10자리로 설정.
    printf("[%10d]\n[%10d]\n[%10d]\n", i, j, k);

    //  출력을 10자리로 설정하고 왼쪽 정렬렬
    printf("[%-10d]\n[%-10d]\n[%-10d]\n", i, j, k);

    return 0;
}
