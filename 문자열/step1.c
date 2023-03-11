//char 자료 형태의 배열로 이루어져 있다.

//하나의 문자열 안의 글자수를 세는 프로그램이다.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main (void) {
    char input[1001];
    gets(input); //엔터를 칠때까지의 문자가 input안에 들어간다.
    int count=0;
    while (input[count] != '\0') //문자열은 기본적으로 빈공간에는 null문자가 들어간다.
    {
        count++;
    }
    printf("입력한 문자열의 길이 %d\n", count);
    printf("입력한 문자열 : %s", input);
    
    return 0;
}