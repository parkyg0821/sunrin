//다차원 배열은 배열이 배열의 원소로 들어가는 구조를 말한다.
//흔히 이차원 배열은 M X N의 형태를 나타낼때 많이 사용된다.

//구구단을 이차원 배열을 이용하여 생성하고 출력하는 프로그램이다.

//5개의 정수 중에서 최댓값과 최소값의 위치를 출력하는 프로그램이다.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main () {
    int i, j;
    int gugudan[10][10]; //[자료형] [변수이름] [그룹개수(행 개수)] [그룹당 세부 요소 개수(열개수)]
    for(i=1; i<=9; i++) {
        printf("\n[%d단]", i);
        for(j=1; j<=9; j++) {
            gugudan[i][j] = i*j; //i번째 행에 j번째 열에 특정 값을 넣어준다
            printf("%d * %d = %d\n", i, j, gugudan[i][j]);
        }
    }
    return 0;
}