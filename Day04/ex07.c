#include <stdio.h>

int main(void){
    int N;
    char S[20];
    printf("성적 : ");
    scanf("%d", &N);

    switch (N){
        case 100:
        case 90:   
            printf("성적은 A 입니다.\n");
            break;
        case 80:
        case 70:
            printf("성적은 B 입니다.\n");
            break;
        case 60:
        case 50:
            printf("성적은 C 입니다.\n");
            break;
        default:    
            printf("성적은 F 입니다.\n");
            break;
    }

}