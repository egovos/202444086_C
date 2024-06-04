#include <stdio.h>

struct data {
    int year;
    int month;
    int day;
};

struct student
{
    int sno;
    char name[10];
    int age;
    struct data *sd;
};

int main() {
    struct data d = {2024, 3, 2};
    struct student s = {202444086, "이인희", 20};

    s.sd = &d;

    printf("1. 학번: %d\n", s.sno);
    printf("2. 이름: %s\n", s.name);
    printf("3. 나이: %d\n", s.age);
    printf("4. 입학일: %d. %d. %d\n", s.sd -> year, s.sd -> month, s.sd -> day);

    return 0;
}
