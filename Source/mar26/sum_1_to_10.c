#include <stdio.h>

int main()
{
    int num = 1, sum = 0;

    while (num <= 10) {
        sum += num++;
    }
    
    printf("1부터 10까지의 합 = %d\n", sum);
    printf("while문이 끝난 뒤의 num의 값 = %d\n", num);

    return 0;
}
