#include <stdio.h>

int main() {
    int a = 30;
    int *ptr = NULL;

    printf("a = 30, ptr = &a 일 때\n");

    ptr = &a;
    printf("1. 포인터 ptr의 주소 값: %u\n", ptr);
    printf("2. 포인터 ptr가 가리키는 *ptr의 데이터 값: %u\n", *ptr);

    printf("\n*ptr = 50 일 때\n");

    *ptr = 50;
    printf("1. 포인터 ptr의 주소 값: %u\n", ptr);
    printf("2. 포인터 ptr가 가리키는 *ptr의 데이터 값: %u\n", a);

    return 0;
}
