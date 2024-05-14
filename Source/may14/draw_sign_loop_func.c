#include <stdio.h>
void draw_sign(int cnt);

int main() {
    int num;

    scanf("%d", &num);

    draw_sign(num);

    return 0;
}

void draw_sign(int cnt) {
    for (int i = 0 ; i < cnt; i++) {
        printf("\"!@#$*()_+|\n");
    }
}
