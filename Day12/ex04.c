#include <stdio.h>

// ���� ����
// : ���α׷��� ��� �������� ���� ����
int number = 100;

void printNumber(void){
    printf("���� ���� number�� %d \n", number);
}

int main(void){
    // ���� ����
    // : ����� �߰�ȣ { } ��� �ȿ����� ���� ����
    int number = 200;
    printf("���� ���� number�� %d \n", number);

    if( number > 10 ){
        int number = 300;
        printf("(���ǹ�) ���� ���� number �� %d \n", number);
    }

    // �Լ� ȣ��
    printNumber();

    return 0;

}