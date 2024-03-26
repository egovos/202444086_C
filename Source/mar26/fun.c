#include <stdio.h>
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);

int main()
{
    int a, b, result;
    scanf("%d %d", &a, &b);

    result = add(a, b);
    printf("%d + %d = %d\n", a, b, result);

    result = sub(a, b);
    printf("%d - %d = %d\n", a, b, result);

    result = mul(a, b);
    printf("%d * %d = %d\n", a, b, result);

    result = div(a, b);
    printf("%d / %d = %d\n", a, b, result);

    return 0;
}

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

int div(int a, int b)
{
    return a / b;
}
