#include <stdio.h>

int main(void){
    // ���
    // : � ������ �۰ų� ���� ���� �������� ��,
    //   ���� ������ 0�� �Ǵ� ���� ������ �Ѵ�.
    // 6�� ��� - 1 2 3 6
    
    int input;
    printf("���� �Է� : ");
    scanf("%d", &input);

    printf("%d �� ��� : ", input);

    for( int i = 1; i <= input; i++){
        if(input % i == 0){
            printf("%d, ", i);
        }
    }
    printf("\n");

    return 0;
}