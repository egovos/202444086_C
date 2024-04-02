#include <stdio.h>

int main() {
    int jumpsu;
    char grade;

    printf("점수 입력: ");
    scanf("%d", &jumpsu);

    if (jumpsu >= 90) {
        grade = 'A';
    }
    else if (jumpsu >= 80) {
        grade = 'B';
    }
    else if (jumpsu >= 70) {
        grade = 'C';
    }
    else if (jumpsu >= 60) {
        grade = 'D';
    }
    else {
        grade = 'F';
    }

    printf("점수 등급 : %c 학점(%d)\n", grade, jumpsu);

    return 0;
}
