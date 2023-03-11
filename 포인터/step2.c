//포인터의 변수의  값을  바꾸는 프그램이다.
#include <stdio.h>
int main() {
    int a=5;
    int* ptr; //포인터 만들기
    ptr = &a; 
    //ptr의 주소를 i에 매칭
    printf("주소 : %x\n", &a);
    printf("ptr이 들고 있는 값 : %d", *ptr);
    return 0;
}