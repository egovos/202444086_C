#include <stdio.h>

int main() {
    short num1;
    int num2;
    long num3;
    long long num4;

    printf("자료형의 크기를 구하는 함수 - sizeof() 함수\n");
    printf("1. short형 변수 - %d바이트\n", sizeof(num1));
    printf("1. int형 변수 - %d바이트\n", sizeof(num2));
    printf("1. long형 변수 - %d바이트\n", sizeof(num3));
    printf("1. long long형 변수 - %d바이트\n", sizeof(num4));
    printf("1바이트는 8비트 입니다.\n");
    printf("1. short형 변수 - %d비트\n", sizeof(num1) * 8);
    printf("1. int형 변수 - %d비트\n", sizeof(num2) * 8);
    printf("1. long형 변수 - %d비트\n", sizeof(num3) * 8);
    printf("1. long long형 변수 - %d비트\n", sizeof(num4) * 8);

    return 0;
}
