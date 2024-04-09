#include <stdio.h>

int main() {
    int x, y;
    char op;

    scanf("%d %c %d", &x, &op, &y);

    switch(op) {
        case '+': printf("%d + %d = %d\n", x, y, x + y);
            break;
        case '-': printf("%d - %d = %d\n", x, y, x - y);
            break;
        case '*': printf("%d x %d = %d\n", x, y, x * y);
            break;
        case 'x': printf("%d x %d = %d\n", x, y, x * y);
            break;
        case 'X': printf("%d x %d = %d\n", x, y, x * y);
            break;
        case '/': printf("%d / %d = %d\n", x, y, x / y);
            break;
        default: printf("알 수 없는 기호입니다.\n");
            break;
    }

    return 0;
}
