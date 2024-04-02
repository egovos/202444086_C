#include <stdio.h>

int main() {
    int val, a, b;

    a = 8;
    val = ++a;

    printf("a가 8일때\n");
    printf("1. val = ++a이면 val = %d, a = %d\n", val, a);

    a = 8;
    val = a++;

    printf("2. val = a++이면 val = %d, a = %d\n", val, a);

    a = 8;
    val = --a;

    printf("3. val = --a이면 val = %d, a = %d\n", val, a);

    a = 8;
    val = a--;

    printf("4. val = a--이면 val = %d, a = %d\n", val, a);

    a = 10;
    b = 15;
    val = ++a + b--;
    
    printf("a가 10, b가 15일때\n");
    printf("5. val = ++a + b--이면 val = %d, a = %d, b = %d\n", val, a, b);
    
    a = 10;
    b = 15;
    val = a++ + --b;
    
    printf("6. val = a++ + --b이면 val = %d, a = %d, b = %d\n", val, a, b);

    return 0;
}
