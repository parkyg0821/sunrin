#include <stdio.h>
int main() {
    short birhday;
    short *ptr; //포인터 변수 선언함, int는 포인터 변수가 가르키는 대상의 크기
    ptr = &birhday; //birthday 변수의 주소를 ptr 변수에 대입함
    *ptr = 0x0412; //변수값에 1042대입(번지 지정 연산자)
    printf("%p, %d", ptr, birhday);
}
//ptr은 포인터 변수에 주소 저장.
//*ptr은 포인턱사 가르키는 대상에 값 저장