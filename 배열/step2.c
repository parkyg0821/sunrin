//5개의 정수 중에서 최소값과 위치를 출력하는 프로그램이다.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define NUMBER 5

int main() {
    int i, min, index;
    int array[NUMBER];
    min = __INT_MAX__; //가장 큰 int형은 INT_MAX이다.
    index = 0;
    for (i=0; i<NUMBER; i++) {
        scanf("%d", &array[i]);
        if(min>array[i]) {
            min = array[i];
            index = i;
        }

    }
    printf("최솟값은 %d, 위치는 %d입니다.", min, index+1);
    return 0;
}