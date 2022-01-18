#include <stdio.h>

int main(void){
    
    int a;

    // 입력문 - scanf() 함수
    // : %d(십진수) 형태로 입력을 받아서, 변수 a 저장
    // & : 주소 연산자
    scanf("%d", &a);
    printf("입력 값 a : %d", a);

    return 0;

}