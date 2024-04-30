#include <stdio.h>
int get_integer();

int main() {
    int a = get_integer();
    int b = get_integer();

    printf("%d", a + b);

    return 0;
}

int get_integer() {
    int num;

    printf("정수를 입력하세요: ___\b\b\b");
    scanf("%d", &num);

    return num;
}
