#include <stdio.h>

/*
    EOF(End Of File)
    : 텍스트 파일의 끝을 표현하기 위해 사용

    getchar() 입력함수가 EOF 반환하는 경우
    1. 함수 호출 실패 : 읽어들일 데이터가 없을 때
    2. CTRL + Z, CTRL + C 를 입력하는 경우

    EOF : 입력함수에 대해서 문자 입력을 종료하는 의미
*/
int main(void){

    int ch;
    while(1){       // 무한반복
        
        ch = getchar();     // 하나의 문자만 받는 함수지만 무한으로 반복됨으로서 문자열이 출력되는 것 처럼 보인다

        if( ch == EOF )
            break;      // 반복문 탈출

        putchar(ch);
    }

    return 0;

}