//중첩반복문 별찍기에서 옆으로된 삼각형을 출력하는 프로그램이다.

#include <stdio.h>

int main(void) {
    int i=0, j=0, n=0;
    scanf("%d", &n);
    for (i=1;i<=n;i++) {
        for (j=1;j<=i;j++) {
            printf("*");
        }
        printf("\n");
    }
    for (i=n-1;i>=1;i--) {
        for (j=1;j<=i;j++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}