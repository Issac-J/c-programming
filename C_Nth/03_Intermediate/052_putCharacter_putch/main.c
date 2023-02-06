#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void main(void)
{
    print("This is a putch function !");
}

int print(char *string) {

    int len = 0;

    //  문자열은 NULL을 만났을 떄 종결되기 때문에, 현재 string 이 가리키는 번지의 값이 NULL이 될 때까지 반복 실행.
    while( *string != (char)NULL ) {

        //  현재 string 이 가리키는 번지의 문자를 출력한다.
        putch( *string );

        //  string 이 가리키는 번지를 1만큼 증가
        string++;
        len++;
    }

    //  현재 출력되고 있는 줄을 다음 줄의 첫 번째로 이동
    putch('\r');    //  캐리지 리턴(CR)
    putch('\n');    //  라인 피드(LF)

    return len;
}

/*
    캐리지 리턴(CR) : `맨 앞으로 이동` 하라는 의미
    라인 피드(LF) : `새로운 라인` 이라는 의미
*/
