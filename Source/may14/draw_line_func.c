#include <stdio.h>
void draw_line();

int main() {

    draw_line();

    printf("line 함수를 호출하였습니다.\n");
    printf("line 함수를 다시 호출합니다.\n");

    draw_line();

    return 0;
}

void draw_line() {
    printf("============================\n");
}
