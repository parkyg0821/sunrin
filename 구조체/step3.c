#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct point 
{
    int x, y;
};

int main() {
    struct point p1, p2; //자료형 만듬, 변수 x
    int xDiff, yDiff; //x좌표의 차이점, y좌표의 차이점
    double distance;

    printf("1번 점의 좌표 :");
    scanf("%d %d", &p1.x, &p1.y);
    printf("2번 점의 좌표 :");
    scanf("%d %d", &p2.x, &p2.y);

    xDiff = p1.x - p2.x;
    yDiff = p1.y - p2.y;

    distance = sqrt(xDiff * xDiff + yDiff+ yDiff); //sqrt 제곱근을 구하는 함수로 math 헤더 파일 안에 들어있다.
    printf("두점 사이의 거리는 %lf입니다.", distance);

    return 0;
}
