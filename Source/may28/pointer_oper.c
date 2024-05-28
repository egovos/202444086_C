#include <stdio.h>

int main() {
    char c;
    char *pc;

    pc = &c;

    int i;
    int *pi;

    pi = &i;

    double d;
    double *pd;

    pd = &d;

    printf("\n");

    printf("1. 포인터 증감 연산자 사용전 주소 값\n");
    printf("char형 포인터 주소 값: %d\n", pc);
    printf("int형 포인터 주소 값: %d\n", pi);
    printf("double형 포인터 주소 값: %d\n", pd);

    *pc++;
    *pi++;
    *pd++;

    printf("\n2. 포인터 *p++ 연산자 수행 후 주소 값\n");
    printf("char형 포인터 주소 값: %d\n", pc);
    printf("int형 포인터 주소 값: %d\n", pi);
    printf("double형 포인터 주소 값: %d\n", pd);

    int a = 10, *ptr = NULL;

    ptr = &a;
    *ptr = 100;

    printf("before: %u, %u\n", ptr, *ptr);
    
    *ptr++;
    printf("after *ptr++: %u, %u\n", ptr, *ptr);
    ptr = &a;
    *ptr = 100;

    (*ptr)++;
    printf("after (*ptr)++: %u, %u\n", ptr, *ptr);
    ptr = &a;
    *ptr = 100;

    *++ptr;
    printf("after *++ptr: %u, %u\n", ptr, *ptr);
    ptr = &a;
    *ptr = 100;
    
    ++*ptr;
    printf("after ++*ptr: %u, %u\n", ptr, *ptr);

    return 0;
}
