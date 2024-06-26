#include <stdio.h>
#define DT 5

int sv(int score[], int size);

int main() {
    int score[DT] = {88, 96, 75, 81, 99};
    int sum = 0;
    float avg;

    printf("상수> #define DT 5 \n");
    printf("배열> score[DT] = {88, 96, 75, 81, 99};\n");

    sum = sv(score, DT);
    avg = sum / 5.0;

    printf("반환> 5개 과목의 총점 : %d\n", sum);
    printf("산출> 5개 과목의 평균 : %.2f\n", avg);

    return 0;
}

int sv(int score[], int size) {
    printf("%d\n", sizeof(score)); //배열의 시작 주소만을 받았으므로 주소의 크기 출력
    
    int total = 0;

    for (int i = 0; i < size; i++) {
        total += score[i];
    }

    return total;
}
