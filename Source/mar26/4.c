#include <stdio.h>

int main()
{
    unsigned short a, b, result;

    printf("unsigned short형 유효 범위 : 0 ~ 65,535\n");
    printf("첫 번째 정수 입력: ");
    scanf("%hu", &a);
    printf("두 번째 정수 입력: ");
    scanf("%hu", &b);

    result = a - b;
    printf("뺄셈 연산ㅣ %hu - %hu = %hu", a, b, result);

    return 0;
}
