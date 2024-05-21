#include <stdio.h>

int main() {
    int size, maxheight, cnt = 0;

    scanf("%d", &size);

    int arr[size];

    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    maxheight = -1;

    for (int i = size - 1; i > 0; i--) {
        if (arr[i] > maxheight) {
            printf("%d > %d | %d\n", arr[i], maxheight, i);

            maxheight = arr[i];

            cnt++;
        }
    }

    printf("%d\n", cnt);

    return 0;
}
