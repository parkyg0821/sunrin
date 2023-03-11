//동적메모리할당을 활용한 2차원 포인터이다.
#include <stdio.h>
#include <stdlib.h>

int main() {
    short **pp;
    pp = (short *)malloc(sizeof(short *)); //4바이트 만큼 메모리 할당, 2번째 상자
    *pp = (short **)malloc(sizeof(short)); //2바이트 만큼 메모리 할당, 3번째 상자

    **pp = 10; //세번째 상자에 10 대입
    printf("**pp = %d\n", **pp);
    free(*pp);
    free(pp); 
    //해제 순서가 굉장히 중요한데, 번째 상자가 세번째 상자의 주소값을 가지고 있기에
    //두번째 상자를 먼저 해제하면 세번째 상자의 주소값을 잃어버린다.

    return 0;
}

//2차원 포인터가 가르키는 대상을 동적으로 할당하면 좋은 점 => step3