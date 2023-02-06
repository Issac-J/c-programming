#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define ENTER 13

int main(void)
{
    int ch;

    printf("Press Any Key to Convert.\n\n");

    do {
        ch = getch();
        printf("Character : %c , AscII Code : %d\n", ch, ch);
    }
    //  Enter 깂(13) 입력 될 때까지 계속 반복하여 키를 입력받는다.
    while( ch != ENTER);

    return 0;
}

/*
    getch() 함수는 키보드로부터 문자를 1개 입력받아서 int형 숫자로 반환한다.

    [Note]
    1개의 문자를 입력받으려면 getch() 함수를 사용한다.
    1개의 문자를 출력하려면 putch() 함수를 사용한다.

*/
