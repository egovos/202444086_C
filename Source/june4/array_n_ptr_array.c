#include <stdio.h>

int main() {
    char sa[] = "Spacezone";
    char *ptr = "Spacezone";

    printf("배열 주소값: %d\n", sa);
    printf("포인터 주소값: %d\n", ptr);

    printf("\n[배열 사용]\t\t[포인터 사용]\n");

    for (int i = 0; i < 9; i++) {
        printf("sa[%d]: %c\t\t", i, sa[i]);
        printf("*(ptr + %d): %c\n", i, *(ptr + i));
    }
    
    return 0;
}
