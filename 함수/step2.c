//함수는 메인함수의 길이를 줄여준다.
//1월 1일부터 현재날짜까지의 날짜 차이를 구하는 프로그램이다.
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int getDays(int month, int day) { //[반환형] [함수이름]([매개변수])
    int i, sum = 0;
    for(i=1; i<month; i++) {
        if (i == 2) { //2월
            sum += 28;
        } else if(i%2==0) {
            sum += 30;
        } else {
            sum += 31;
        }

    }
    return sum+day;
}

int main(void) {
    int month, day;
    scanf("%d %d", &month, &day);
    printf("1월 1일부터 해당 날짜까지의 거리는 %d일 입니다.", getDays(month, day));
    return 0;
}
//매개변수란 함수 내부적으로 처리를 도와주는 변수