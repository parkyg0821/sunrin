//학생 점수의 총합을 구하는 프로그램이다.

#include <stdio.h>

int main(void) {
    int score[5][2]; //행이 5, 열이 2 = 10개, 5는 학생의 숫자, 2는 수학과 영어
    int total[2] = {0, };
    int i;
    for (i=0;i<5;i++) {
        printf("%d번 학생의 수학, 영어점수 : ", i+1);
        scanf("%d %d", &score[i][0], &score[i][1]);
    }
    for (i=0;i<5;i++) {
        total[0] += score[i][0];
        total[1] += score[i][1];
    }
    printf("5명의 수학점수 합계 : %d\n", total[0]);
    printf("5명의 수학점수 합계 : %d", total[1]);
    return 0;

}