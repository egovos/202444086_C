#include <stdio.h>
int comp(int num1, int num2);

int main() {
    int num1, num2;

    scanf("%d %d", &num1, &num2);

    printf("더 큰 값: %d\n", comp(num1, num2));

    return 0;
}

int comp(int num1, int num2) {
    //두 수가 값으면 num1 리턴
    return (num1 >= num2) ? num1 : num2;
}
