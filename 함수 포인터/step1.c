//c실행파일은 기계어 명령문 단위로 이루어져 있는데, 실행되어 프로세스 형태로 메모리에 저장되면
//코드 세그먼트로 이동된다.
//이말의 뜻은 명령문들도 메모리에 저장되어 있기 때문에 포인터를 사용할 수 있다.

//함수포인터란 특정 함수를 구성하는 시작 명령의 위치를 가르키는 포인터이다.
//함수포인터를 사용한다면 해당함수를 호출하여 실행 할 수 있다.

#include <stdio.h>
int Sum(int a, int b)
{
    int result = 0;
    result = a+b;
    return result;
}

int main() {
    int (*p)(int,int);
    p = &Sum;
    int result = (*p)(2,3);
    printf("%d", result);
}