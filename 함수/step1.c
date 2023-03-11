//몇시 몇분의 시간이 있을 때 거기서 특정 시간을 더해주는 프로그램이다.
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int hour; //전역변수
int minute;
int minuteAdd;

void counter() { //void는 함수의 반환값이 없을때
    minute += minuteAdd;
    hour += minute/60;
    minute %= 60;
    hour %= 24;
    
}
int main(void) {
    printf("시를 입력하세요 : ");
    scanf("%d", &hour);
    printf("분을 입력하세요 : ");
    scanf("%d", &minute);
    printf("더할값을 입력하세요 : ");
    scanf("%d", &minuteAdd);
    counter(); //계산 시작
    printf("더해진 시간은 %d시 %d분 입니다.", hour, minute);   
    return 0;
}
