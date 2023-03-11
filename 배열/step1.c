//5개의 정수 중에서 최댓값과 위치를 출력하는 프로그램이다.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define NUMBER 5

int main() {
    int i, max, index;
    int array[NUMBER]={1,2,3,4,5}; //배열 초기화
    max = 0; //max에 아무런 값도 없기때문에 초기화
    index = 0;
    for (i=0; i<NUMBER; i++) {
        scanf("%d", &array[i]);
        if(max<array[i]) {
            max = array[i];
            index = i;
        }

    }
    printf("최댓값은 %d, 위치는 %d입니다.", max, index+1);
    return 0;
}
