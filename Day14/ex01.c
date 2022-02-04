#include <stdio.h>
#include <string.h>
/*
    援ъ“泥?
    : ?떎?뼇?븳 ?옄猷뚰삎?쓽 蹂??닔?뱾?쓣 臾띠뼱?꽌 ?젙?쓽?븳 ?깉濡쒖슫 ?옄猷뚰삎
    ?궎?썙?뱶 : struct

    * 援ъ“泥? ?젙?쓽
    struct 援ъ“泥? ?씠由? {
        ?옄猷뚰삎 蹂??닔 1;
        ?옄猷뚰삎 蹂??닔 2;
        ...
    };

    * 援ъ“泥? ?꽑?뼵
    struct 援ъ“泥댁씠由? 蹂??닔?씠由?

*/

// 구조체 정의
struct person {
    // 이름, 나이
    char name[30];
    int age;
};


int main(void){
    // 구조체 선언
    struct person boy, girl;

    // 멤버 접근 연산자 (.)
    // boy, girl의 name(이름)에 문자열을 복사
    strcpy(boy.name, "김코딩");
    strcpy(girl.name, "이코딩");

    // boy, girl의 age(나이)
    boy.age = 20;
    girl.age = 21;

    printf("boy의 이름은 %s, 나이는 %d \n", boy.name, boy.age);
    printf("girl의 이름은 %s, 나이는 %d \n", girl.name, girl.age);

    return 0;

}