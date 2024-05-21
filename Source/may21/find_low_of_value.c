#include <stdio.h>

int main() {
    int size, value;

    while (true) {
        scanf("%d %d", &size, &value);

        if (size < 1 || value < 1 || size > 10000 || size > 10000) {
            printf("다시 입력하세요.\n");
            continue;
        }
        else {
            break;
        }
    }
    int arr[size];

    for (int i = 0; i < size; i++) {
        int input;
        scanf("%d", &input);

        if (input < 1 || input > 10000) {
            printf("다시 입력하세요.\n");
            i--;

            continue;
        }

        arr[i] = input;
    }

    for (int i = 0; i < size; i++) {
        if (arr[i] < value) {
            printf("%d ", arr[i]);
        }
    }

    printf("\n");
    return 0;
}
