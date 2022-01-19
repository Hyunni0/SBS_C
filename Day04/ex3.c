#include <stdio.h>

int main(void){
    
    int N;
    printf("정수를 입력해주세요 : ");
    scanf("%d", &N);

    if (N % 2 == 1){
        printf("입력한 정수는 홀수입니다. \n");
    } else{
        printf("입력한 정수는 짝수입니다. \n");
    }
    
    return 0;

}