#include <stdio.h>
#define CNT 7
void count_up(int a[], int size);

int main() {
    int a[] = {1, 2, 3, 4, 5, 6, 7};

    printf("defore\n");

    for (int i = 0; i < CNT; i++) {
        printf("%d ", a[i]);
    }

    count_up(a, sizeof(a) / sizeof(a[0])); //배열 이름 자체가 주소

    printf("\nafter\n");

    for (int i = 0; i < CNT; i++) {
        printf("%d ", a[i]);
    }

    printf("\n");

    return 0;
}

void count_up(int a[], int size) {
    for (int i = 0; i < size; i++) {
        a[i]++;
    }
}
