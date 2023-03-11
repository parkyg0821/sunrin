//중첩반복문 별찍기에서 삼각형을 출력하는 프로그램이다.

#include <stdio.h>
int main(){
	int i, j, n=5;
	scanf("%d", &n);
	for (i=1;i<=n;i++) {
		for (j=n-1;j>=i;j--) {
			printf(" ");
		}
	    for (j=1;j<=2*i-1;j++) {
            printf("*");
        }
        printf("\n");
    }
}