#include <stdio.h>

int main(void){
    int N;
    char S[20];
    printf("���� : ");
    scanf("%d", &N);

    switch (N){
        case 100:
        case 90:   
            printf("������ A �Դϴ�.\n");
            break;
        case 80:
        case 70:
            printf("������ B �Դϴ�.\n");
            break;
        case 60:
        case 50:
            printf("������ C �Դϴ�.\n");
            break;
        default:    
            printf("������ F �Դϴ�.\n");
            break;
    }

}