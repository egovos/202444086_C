#include <stdio.h>

int main(void)
{
    int cnt;

    printf("알파벳 소문자가 출력됩니다.\n");

    // for (cnt = 65; cnt <= 90; cnt++) {
    //     printf(" %c", cnt);
    // }

    // printf("\n");

    for (cnt = 97; cnt <= 122; cnt++)
    {
        printf(" %c", cnt);
    }

    return 0;
}
