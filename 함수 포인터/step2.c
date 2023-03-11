//함수포인터를 사용하면 원형이 같은 함수를 그룹으로 묶을 수 있다.
#include <stdio.h>

int Sum(int a, int b) {
    return a+b;
}

int Sub(int a, int b) {
    return a-b;
}

int Mul(int a, int b) {
    return a*b;
}

int Div(int a, int b) {
    return a/b;
}

int main() {
    int(*p[4])(int, int) = {&Sum, &Sub, &Mul, &Div};
    char op_table[4] = {'+', '-', '*', '/'};
    for(int i=0; i<4; i++) {
        printf("%d %c %d= %d\n", 8, op_table[i], 2, (*p[i])(8,2));
    }
}

//콜백이란 자신이 사용할 함수가 명시적으로 호출되지 않고 함수포인터에 의해서 호출되는 방식이다.
//MyAbsolute함수를 콜백함수라 한다이