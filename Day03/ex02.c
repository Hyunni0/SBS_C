#include <stdio.h>

int main(void){
    int age;
    char name[10];      //�迭 ���� scanf �Լ��� &name �� &�� ���� ���������� ����
    // �迭�� �̸� = �ּ�

    printf("���̿� �̸��� �Է��غ�����");
    scanf("%d %s", &age, &name);
    printf("���� : %d \n", age);
    printf("�̸� : %s \n", name);

    return 0;
}