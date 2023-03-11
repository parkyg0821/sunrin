#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> //문자열 관련

int main (void) {
    char input1[5] = "";
    char input2[5] = "";
    printf("문자열 비교 : %d\n", strcmp(input1, input2));
    return 0;
}