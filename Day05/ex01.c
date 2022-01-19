#include <stdio.h>

int main(void){
    // 1~10까지 합계를 구하시오.
    int i = 1;
    int sum = 0;

    while(i <= 10){
        sum = sum + i;
        i = i + 1;
    }
    printf("합계 : %d \n", sum);
}