#include <stdio.h>

int main() {
    int x = 1, n, sum = 0;

    printf("수를 입력해 주세요: ");
    scanf("%d", &n);

    while (1) {
        if (x % 2 == 0) {
            sum = x + sum;
        }

        x++;

        if (x > n) {
            break;
        }
    }

    printf("1부터 n(%d)까지 짝수의 합: %d\n", n, sum);

    return 0;
}
