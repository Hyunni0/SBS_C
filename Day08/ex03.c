#include <stdio.h>

/*
    ������ ���� : �ּҰ� �����ϴ� ����
    �迭�� �̸� : ù��° ����� �ּҰ� �ǹ�

<<<<<<< HEAD
    ������ �迭 
    : ���� �ڷ����� ���� ���� �ּҰ��� �����ϴ� ����
*/
int main(void){
=======
    ������ �迭
    : ���� �ڷ����� ���� ���� �ּҰ��� �����ϴ� ����(�迭)
*/

int main(void) {
>>>>>>> fe88cc9683aeb81ecc5fe5847196e24b8b2aba5a
    int n1 = 3, n2 = 6, n3 = 9;

    // ������ ���� ���� �� �ʱ�ȭ
    int *ptr1 = &n1;
    int *ptr2 = &n2;
    int *ptr3 = &n3;

    // ������ �迭 ���� �� �ʱ�ȭ
<<<<<<< HEAD
    int *parr[3] = {ptr1, ptr2, ptr3};
=======
    int *parr[3] = { ptr1, ptr2, ptr3 };

>>>>>>> fe88cc9683aeb81ecc5fe5847196e24b8b2aba5a

    // �ּҿ� ����ִ� ���� ����ϰ� �� �ּҸ� ���
    printf("%d %d %d \n", *parr[0], *parr[1], *parr[2]);
    printf("%p %p %p \n", parr[0], parr[1], parr[2]);

    // �ּҸ� ǥ���ϴ� ���� ���� : %p
<<<<<<< HEAD
=======


    
>>>>>>> fe88cc9683aeb81ecc5fe5847196e24b8b2aba5a
}