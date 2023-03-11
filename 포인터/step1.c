//포인터는 특정 데이터가 저장된 메모리의 주소를 저장하는 변수이다.
//다른 곳의 주소 그 자체를 가르킨다.

//두 변수의 값을 서로 변환하는 프로그램이다.

#include <stdio.h>

//두 변수의 값을 서로 변환하는 포인터 함수
void swap(int *x, int *y) { //int *x에서 *은 int형의 어떠한 값을 가르키는 포인터 *을 만들었다는 뜻이다.
    int temp;
    temp = *x; //포인터 x가 가르키는 값을 가져오게 된다.
    *x = *y; //x가 가르키는 주소의 값을 y가 가르키는 주소의 값으로 바꿔준다.
    *y = temp; //y가 가르키는 주소의 값을 temp에 넣는다.


}
int main(void) {
    int x = 1;
    int y = 2;
    swap(&x, &y);
    printf("x = %d\ny=%d", x, y);
    return 0;
}