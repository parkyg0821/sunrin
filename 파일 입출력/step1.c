//램은 전원이 켜져 있을때만 데이터를 유지할 수 있다.
//운영체제는 보조기억장치의 종류에 상관없이 같은 함수로 데이터를 저장할 수 있도록 
//파일 입출력 라이브러리를 제공한다.
//하지만 운영체제 마다 파일 입출력 라이브러리가 달라 c에서는 표준 입력 입출력 라이브러리를 제공한다.

//표준입출력 라이브러리는 데이터의 형식에 따라 다른 함수를 제공한다.
//데이터 형식(문자열), 바이너리(이진) 으로 나뉘는데, 각각 함수가 달라 구분을 할 수 있어야한다.

//바이너리 속성을 기준으로 하면 컴파일러는 데이터 크기를 8바이트로 인식한다.
//문자열 속성을 기준으로 하면 컴파일러는 데이터 크기를 3바이트로 인식한다.
//속성별로 사용하는 함수가 다를 수밖에 없다.

//변수에 저장된 데이터 크기를 구할때의 차이점.
//바이너리 속성은 메모리 크기를 구해야 하기에 sizeof 사용.
//문자열 속성은 strlen함수 사용.

//변수에 저장된 값을 다른 변수에 복사할 때의 차이점
//바이너리 속성은 memcpy
//문자열 속성은 strcpy

//바이너리 속성이 저장방식이나 처리효율이 더 높아 프로그램에서 많이 사용한다.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define memccpy

int main() {
    char temp1[8] = {'a', 'b', 'c', 'd', 0};
    char desk1[8];
    char desk2[8];

    //크기
    int data_size1 = sizeof(temp1);
    int data_size2 = strlen(temp1);

    //복사
    memccpy(desk1, temp1, sizeof(8)); //sizeop(temp2) 8바이트 크기만큼(temp2만큼)
    strcpy(desk2, temp1);

    printf("%d %d %s %s", data_size1, data_size2, desk1, desk2);
}
