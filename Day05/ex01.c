#include <stdio.h>

int main(void){
    // 1~10���� �հ踦 ���Ͻÿ�.
    int i = 1;
    int sum = 0;

    while(i <= 10){
        sum = sum + i;
        i = i + 1;
    }
    printf("�հ� : %d \n", sum);
}