//중첩반복문 별찍기에서 사각형을 출력하는 프로그램이다.
//간단하게 i는 세로, j는 가로라고 생각하면 된다.(행=i, 열=j)

#include <stdio.h>

int main(void) {
    int i=0, j=0;

    for(i=0;i<=4;i++) {
        for (j=0;j<=4;j++) {
            printf("*");
        }
        printf("\n");
        
    }
    return 0;
}