#include <stdio.h>

int main(void){
    double number1 = 10;        //자동형변환 (%f 는 실수 %d는 정수)
    int number2 = 1.2345;
    short number3 = 40000;     // 대락 32000정도의 값까지만 넣을 수 있다.
    // overflow(오버플로우)
    // 특정 자료형이 갖는 범위보다 더 큰 값을 할당하는 경우 

    printf("number1 : %f \n", number1);
    printf("number2 : %d \n", number2);
    printf("number3 : %d \n", number3);

    return 0;

}