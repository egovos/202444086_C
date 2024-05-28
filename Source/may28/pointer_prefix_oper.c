#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr_a = NULL;

    ptr_a = arr;

    printf("ptr_a 주소의 데이터 값: %u\n", *ptr_a);
    printf("*++ptr_a: %u(주소 값을 변경)\n", *++ptr_a);

    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    ptr_a = arr;
    printf("++*ptr_a: %u(주소에 있는 값을 변경)\n", ++*ptr_a);
    
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
