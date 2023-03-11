//Class와 흡사한 개념.
//객체지향 프로그래밍에서 말하는 클래스의 모체가 되는 것으로 
//여러개의 자료형을 묶어 새로운 자료형을 만들 수 있는 방법.

//학생 정보 구조체

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student //구조체 만듬
{
    int number;
    char name[10];
    double grade;
};

int main() {
    struct student s; //하나의 자료형을 만든 듬
    s.number = 20150001; //s라는 구조체의 number라는 변수 안에 값을 넣는다
    strcpy(s.name, "박예겸");
    printf("학점을 입력하시오 : ", s.grade);
    scanf("%lf", &s.grade);
    printf("학번 : %d\n", s.number);
    printf("이름 : %s\n", s.name);
    printf("학점 : %.2lf\n", s.grade);
    return 0;
}
