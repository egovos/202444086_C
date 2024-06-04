#include <stdio.h>
#include <string.h>

struct stdu {
    int sno;
    char name[10];
    float avg;
};

int main() {
    struct stdu s;

    s.sno = 202444086;
    strcpy(s.name, "이인희");
    s.avg = 88.33f;

    printf("구조체 맴버 출력\n");
    printf("학번: %d\n", s.sno);
    printf("성명: %s\n", s.name);
    printf("점수: %.2f\n", s.avg);

    return 0;
}
