//구조체를 사용한다면 프로그램 운영이나 관리 데이터베이스 접근적인 측면에서 유용하다.

//사각형의 넓이와 둘레를 구하는 프로그램
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

struct point
{
    int x, y;
};

struct rect //rect는 사각형
{
    struct point p1; //가장 왼쪽 위의 
    struct point p2; //가장 오른쪽 아래의 점
    //사각형 정의
};

int main() {
    struct rect r; //r이라는 변수 생성, 사각형
    int w, h, area, peri; //밑, 높, 넓, 둘
    
    printf("좌측 상단의 좌표를 입력하세요 : ");
    scanf("%d %d", &r.p1.x, &r.p1.y);
    printf("우측 하단의 좌표를 입력하세요 : ");
    scanf("%d %d", &r.p2.x, &r.p2.y);
    w = abs(r.p2.x - r.p1.x);
    h = abs(r.p2.y - r.p2.x); //abs는 절댓값

    area = w*h;
    peri = 2*w+2*h;

    printf("넓이 : %d, 둘레 : %d", area, peri);
}

