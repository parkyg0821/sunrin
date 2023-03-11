//중첩반복문 별찍기에서 반대로된 삼각형을 출력하는 프로그램이다.

#include <stdio.h>

int main(void) {
    int i=0, j=0;
    for (i=0;i<=4;i++) {
        for (j=0;j<5-i;j++) {
            printf("*");
        }printf("\n");        
    }
    return 0;
}