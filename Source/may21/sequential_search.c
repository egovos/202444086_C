#include <stdio.h>
#define AL 7

int main() {
    int s_list[AL] = {5, 4, 1, 3, 2, 7, 6};
    int input;
    char yn;

    printf("초기> 배열 요소: 5 4 1 3 2 7 6\n");

    while (true) {
        printf("숫자 입력(1 ~ 7): ");
        scanf("%d", &input);
        printf("\n");

        if (input < 1 || input > 7) {
            printf("입력 오류, 다시 입력하세요\n");
            continue;
        }

        for (int i = 0; i < AL; i++) {
            if (s_list[i] == input) {
                printf("순차 탐색 횟수: %d\n", i + 1);
                printf("순차 성공 인덱스: %d\n", i);

                break;
            }
        }

        re_ch:
            printf("프로그램을 다시 시작할까요? (y/n): ");
            scanf("%c", &yn);

            if (yn == 'y' || yn == 'Y') {
                continue;
            }
            else if (yn == 'n' || yn == 'N') {
                break;
            }
            else {
                printf("알파벳 입력 오류, 다시입력해주세요.\n");
                goto re_ch;
            }
    }

    return 0;
}
