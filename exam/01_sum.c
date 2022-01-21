/*
    정수 하나를 입력받아서, 1부터 N까지 합을 구하여
    출력하는 프로그램을 완성하시오.
    (입력예시) 
        정수 입력 :
    (출력예시)
        1~10 까지 합계 = 55
*/
#include <stdio.h>

int main(void){
    // 0. 변수 선언 : N, sum(합계)
    // 1. 정수 입력 받기
    // 2. 합계 구하기 (반복) - 1부터 N까지 반복
    // 3. 출력하기
    
    int N;
    int sum = 0;

    printf("정수 입력 : ");
    // scanf( 인자1, 인자2, ...)
    // 인자1: 입력 받은 값의 형식문자 (%d, %c, %s ...)
    // 인자2: 입력 받은 값을 저장할 메모리공간 주소값(변수)
    scanf("%d" , &N);

    for( int i = 1; i <= N; i++ ){
        sum = sum + i;
    }
    printf("1 ~ %d 까지 합계 = %d", N, sum);

    return 0;


}