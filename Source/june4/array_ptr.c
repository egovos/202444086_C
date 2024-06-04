#include <stdio.h>

int main() {
    int a[5] = {10, 20, 30, 40, 50};
    int (*ptr_a)[5];

    ptr_a = &a;
    printf("배열 포인터 주소: %d\n\n", ptr_a);

    for (int i = 0; i < 5; i++) {
        printf("%d번째 요소: %d\n", i, (*ptr_a)[i]);
    }

    return 0;
}
