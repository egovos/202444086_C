#include <stdio.h>

int hap(int a, int b);
int cha(int a, int b);

int main() {
    int result;
    int (*fp)(int, int);

    fp = hap;
    result = fp(100, 200);
    printf("100 + 200 덧셈 결과: %d\n", result);

    fp = cha;
    result = fp(100, 200);
    printf("100 - 200 뺼셈 결과: %d\n", result);

    return 0;
}

int hap(int a, int b) {
    printf("\n[hap() 함수 영역]\n\n");

    return a + b;
}

int cha(int a, int b) {
    printf("\n[cha() 함수 영역]\n\n");

    return a - b;
}
