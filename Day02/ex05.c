#include <stdio.h>  // ǥ��������� �ٷ�� �������
#include <string.h> // ���ڿ��� �ٷ�� �������

int main(void){
    char phone[10] = "samsung";   // �迭�� ũ�Ⱑ �� +1�� �ʿ�� ���� ���ڿ����� ũ�� �ȴ�.

    printf("����Ʈ�� �̸� : %s \n", phone);
    // ���ڿ� ���� �Լ� - strcpy
    // strcpy(������� ����, ������ ���ڿ�);
    strcpy(phone, "Iphone 12");
    printf("����Ʈ�� �̸� : %s \n", phone);

    return 0;

}