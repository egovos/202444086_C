#include <stdio.h>
#define DT 3 //컴파일 과정에서 DT는 3으로 변경됨

int main() {
    int score[DT];
    int cnt, sum = 0;
    float avg;
    
    for (cnt = 0; cnt < DT; cnt++) {
        printf("과목%d 점수: ___\b\b\b", cnt + 1);
        scanf("%d", score + cnt); //&score[cnt]

        sum += score[cnt];
    }

    /* for (cnt = 0; cnt < DT; cnt++) {
        sum += score[cnt];
    } */

    avg = (float)sum / DT; //상수도 형변환 가능

    printf("총점: %d\n", sum);
    printf("평균: %.2f\n", avg);

    return 0;
}
