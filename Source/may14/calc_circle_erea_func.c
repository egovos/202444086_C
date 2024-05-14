#include <stdio.h>
float calc_circle_area(int num);

int main() {
    int num;

    scanf("%d", &num);

    printf("원의 넓이: %.2f\n", calc_circle_erea(num));

    return 0;
}

float calc_circle_erea(int num) {
    //3.14가 float형 이라서 num도 알아서 형변환되어 계산됨 (컴파일러에 따라 안될 수도 있음)
    return num * num * 3.14;
}
