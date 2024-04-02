#include <stdio.h>

int main() {
    int cnt = 0, sum = 0;

    while (1) {
        int a;

        scanf ("%d", &a);

        if (a == 0)
            break;
        
        cnt++;
        sum += a;
    }
    
    printf("입력된 자료의 갯수: %d\n", cnt);
    printf("입력된 자료의 합계: %d\n", sum);
    printf("입력된 자료의 평균: %.2f\n", (float)sum / cnt);

    /*int a, b, x, y;

    scanf("%d %d %d %d", &a, &b, &x, &y);

    printf("입력된 자료의 갯수: %d\n", 4);
    printf("입력된 자료의 합계: %d\n", a + b + x + y);
    printf("입력된 자료의 평균: %.2f\n", (float)(a + b + x + y) / 4);*/

    return 0;
}
/*
    int x;

    printf("원하는 단을 입력하세요.\n");
    scanf("%d", &x);

    printf("\n    %d단\n", x);
    printf("------------\n");

    for (int i = 1; i <= 9; i++) {
        printf(" %d x %d = %2d\n", x, i, x * i);
    }

    printf("------------\n");
*/
