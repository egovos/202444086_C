#include <stdio.h>

int main() {
    int a = 103;
    int *ptr = NULL;

    ptr = &a;

    printf("int a = 103;\n");
    printf("int *ptr = NULL;\n");
    printf("ptr = &a;\n");

    if (ptr != NULL)  {
        printf("ptr는 유효한 포인터\n");
        printf("1. 포인터 ptr의 주소 값: %u\n", ptr);
        printf("2. 포인터가 가리키는 *ptr의 데이터 값: %u\n", *ptr);
    }
    else {
        printf("소스 코드 08행을 /* ptr = &a */처럼 주석 처리한 경우\n");
        printf("ptr는 유효하지 않은 포인터\n");
    }

    return 0;
}
