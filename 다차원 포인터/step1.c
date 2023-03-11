//간접으로 여러번 가르키는 포인터를 다차원 포인터라고 한다.
//일반 변수에도 주소 값을 저장할수는 있지만 값을 읽거나 쓸 수 없어 의미가 없다.
//주로 사용하는 것은 2차원 포인터.
//short **pp로 선언
//2차원 포인터는 주소이동을 두번 할 수 있다.
//2차원 포인터는 1차원 포인터의 주소 값을 저장한다.


#include <stdio.h>

int main() {
    short data = 3;
    short *p = &data; //data 변수의 주소 값을 1차원 포인터 p에 저장함.
    short **pp = &p; //1차원 포인터 p 변수의 주소 값을 2차원 포인터 pp 에 저장함.
    
    printf("before data : %d\n", data); //3출력
    *p = 4; //1차원 포인터 p를 사용하여 data 변수 값을 4로 수정
    printf("*p data : %d\n", data); //4출력
    **pp = 5; //2차원 포인터 pp 사용하여 data 변수 값력 5로 수정
    printf("**pp data : %d\n", data); //5출력
}