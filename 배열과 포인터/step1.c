//포인터와 배열은 표기만 다를 뿐 문법 구조는 비슷하다.
//둘다 메모리의 시작주소를 기준으로 삼음.
//"배열과 포인터는 표기법을 서로 바꿔 사용할 수 있다."

//data[1] = 5  ==  *(data + 1) =5
//*p = 3  ==  p[0] = 3

//배열 표기법은 요소를 구성하는 모든 바이트 값을 한번에 수정해 제약이 있다.
//*(char *)(data+1) = 0x22, (char *)로 int형을 잠시 1바이트로 바꾼다
//*(data+1) = *data[1]
//따라서 포인터 표기법은 배열 항목의 크기와 상관없이 자유롭게 값을 수정할 수 있다.

//chara data[4]
//char *p = &data[0] <=
//이처럼 배열의 첫항목의 주소가 배열 전체의 시작 주소와 같다.
//&*(data+0) 라고도 표현 가능

//하지만 배열은 포인터가 아니기 때문에 배열의 시작 주소는 변경 할 수 없다.
#include <stdio.h>
int main() {
    char data1, data2, data3, data4, data5, i;
    //char *p[5]; //배열과 포인터 합체, *p1, *p2 ~ 와 같음
    char *p[5] = {&data1, &data2, &data3, &data4, &data5};
    for(i=0;i<5;i++) *p[i] = 0; //data1~data5까지 모두 0이 저장된다.
    *p[3] = 4;
    printf("%d %d %d %d %d", data1, data2, data3, data4, data5);
    return 0;
}