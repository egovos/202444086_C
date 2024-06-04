#include <stdio.h>

void creed(char **p_ptr_c);
void target(char **p_ptr_c);

int main() {
    char *ptr_c;

    creed(&ptr_c);
    printf("생활 신조: %s\n", ptr_c); //문자열 상수가 p_ptr_c의 값

    target(&ptr_c);
    printf("인생 좌우명: %s\n", ptr_c);

    return 0;
}

void creed(char **p_ptr_c) {
    *p_ptr_c = "현재 위치에서 최선을 다하자";
}

void target(char **p_ptr_c) {
    *p_ptr_c = "오락은 재밌어야 한다";
}
