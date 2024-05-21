#include <stdio.h>

int main() {
    char str[20];
    int length = 0;

    printf("문> 문자열을 20바이트 이내로 입력하시오: ");
    scanf("%s", str);
    printf("\n");

    for (int i = 0; str[i] != '\0'; i++) { //\0 = null
        length++;
    }

    printf("답> 입력한 문자열의 길이: %d바이트\n", length);

    return 0;
}
