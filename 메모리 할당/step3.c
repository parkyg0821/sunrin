//동적메모리로 정수 5개 처리
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *pi, i;
    pi = (int *)malloc(5 * sizeof(int));
    if(pi == NULL) {
        printf("동적메모리 할당에 실패했습니다.");
        exit(1);
    }
    pi[0] = 100; //pi[0]에 100을 넣음
    pi[1] = 200;
    pi[2] = 300;
    pi[3] = 400;
    pi[4] = 500;
    for(i=0;i<5;i++) {
        printf("%d\n", *(pi+i));
    }
    free(pi);
    return 0;
}