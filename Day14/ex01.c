#include <stdio.h>
#include <string.h>
/*
    구조�?
    : ?��?��?�� ?��료형?�� �??��?��?�� 묶어?�� ?��?��?�� ?��로운 ?��료형
    ?��?��?�� : struct

    * 구조�? ?��?��
    struct 구조�? ?���? {
        ?��료형 �??�� 1;
        ?��료형 �??�� 2;
        ...
    };

    * 구조�? ?��?��
    struct 구조체이�? �??��?���?

*/

// ����ü ����
struct person {
    // �̸�, ����
    char name[30];
    int age;
};


int main(void){
    // ����ü ����
    struct person boy, girl;

    // ��� ���� ������ (.)
    // boy, girl�� name(�̸�)�� ���ڿ��� ����
    strcpy(boy.name, "���ڵ�");
    strcpy(girl.name, "���ڵ�");

    // boy, girl�� age(����)
    boy.age = 20;
    girl.age = 21;

    printf("boy�� �̸��� %s, ���̴� %d \n", boy.name, boy.age);
    printf("girl�� �̸��� %s, ���̴� %d \n", girl.name, girl.age);

    return 0;

}