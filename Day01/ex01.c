#include <stdio.h>

//���α׷� ���� - main() �Լ�
int main(){

    //��¹�
    printf("�ȳ��ϼ���  \n");

    // ��������
    int num = 10;

    char a = 'a';    // ����
    int b , c;       // ������ : 1,2,3,4 ...
    double d;        // �Ǽ��� : 1.5 ...

    b = 10;
    c = 20;
    d = 1.25;

    // \n �ٹٲ�
    // %d : decimal(������)  %5d : 5ĭ�� �����ؼ� ��� / %-5d : 5ĭ�� �����ؼ� ���� ����
    // %c : charater(����)
    // %f : float(�Ǽ�) , %.n : �Ҽ��� �Ʒ� n�ڸ����� ���
    printf("���� a : %c \n", a);
    printf("���� b : %5d \n", b);
    printf("���� c : %-5d \n", c);
    printf("���� d : %.2f \n", d);
    printf("%d", num);

    return 0;

}