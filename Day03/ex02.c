#include <stdio.h>

int main(void){
    int age;
    char name[10];      //배열 변수 scanf 함수에 &name 에 &를 빼도 정상적으로 실행
    // 배열의 이름 = 주소

    printf("나이와 이름을 입력해보세요");
    scanf("%d %s", &age, &name);
    printf("나이 : %d \n", age);
    printf("이름 : %s \n", name);

    return 0;
}