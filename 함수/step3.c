#include <stdio.h>

int Sum(int a, int b) {
    int result = 0;
    result = a+b;
    return result;
}

int main() {
    int sum = 0;
    sum = Sum(2,3);
    printf ("%d", sum);
    return 0;
}