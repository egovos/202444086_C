#include <stdio.h>

int main() {
    int cnt, size, choice;
    char *task[5] {
        "Desk",
        "Computer",
        "Books",
        "USB",
        "EXIT"
    };

    size = sizeof(task) / sizeof(task[0]);

    for (int i = 0; i < size; i++) {
        printf("%d.%s\n", i + 1, task[i]);
    }

    while (1) {
        printf("숫자 입력(1~5): ");
        scanf("%d", &choice);

        if (choice < 1 || choice > 5) {
            printf("입력 오류\n");
            continue;
        }
        else if (choice == 5) {
            break;
        }
        else
        {
            printf("선택한 단어는 %s입니다.\n", task[choice-1]);
        }
        

    }

    return 0;
}
