//여러 개의 1차워 포인터를 동적 할당하기.
//malloc함수로 5바이트 메모리를 할당해 2차원 포인터에 저장한다면
//그 메모리를 1차원 포인터처럼 활용할 수 있게된다.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    short **pp;
    scanf("%d", &n);
    pp = (short**)malloc(n * sizeof(short *));
    printf("사용할 1차원 포인터의 개수 : %d", n);
    return 0;
}
//사용자가 메모리를 사용하고 싶은 크기만큼 선택할 수 있기 때문에
//배열을 사용하는 것보다 메모리 효율성이 더 좋다.