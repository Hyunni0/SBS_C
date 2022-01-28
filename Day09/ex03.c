#include <stdio.h>

/*
    EOF(End Of File)
    : �ؽ�Ʈ ������ ���� ǥ���ϱ� ���� ���

    getchar() �Է��Լ��� EOF ��ȯ�ϴ� ���
    1. �Լ� ȣ�� ���� : �о���� �����Ͱ� ���� ��
    2. CTRL + Z, CTRL + C �� �Է��ϴ� ���

    EOF : �Է��Լ��� ���ؼ� ���� �Է��� �����ϴ� �ǹ�
*/
int main(void){

    int ch;
    while(1){       // ���ѹݺ�
        
        ch = getchar();     // �ϳ��� ���ڸ� �޴� �Լ����� �������� �ݺ������μ� ���ڿ��� ��µǴ� �� ó�� ���δ�

        if( ch == EOF )
            break;      // �ݺ��� Ż��

        putchar(ch);
    }

    return 0;

}