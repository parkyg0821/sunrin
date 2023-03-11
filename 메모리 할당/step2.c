//동적메모리로 알파벳을 출력하는 프로그램이다.
#include <stdio.h>
#include <stdlib.h>

int main() {
    char *pc = NULL; //배열 초기화와 같은 느낌
    int i = 0;
    pc = (char *)malloc(100 * sizeof(char)); //100개의 문자가 들어갈 수 있다.
    if(pc == NULL) {
        printf("동적메모리 할당에 실패했습니다.");
        exit(1);
    }
    //pc가 가르키는 포인터를 1씩 증가시키며 알파벳을 삽입한다.
    for ( i = 0; i < 26; i++)
    {
        *(pc + i) = 'a' + i; 
    }
    //아스키코드 0은 NULL을 의미한다
    //문자열 마지막에 NULL이 들어간다면 문자열 종료를 인식한다.
    *(pc + i) = 0;
    printf("%s", pc);
    free(pc);
    return 0;
}