#include <stdio.h>

struct person
{
    char name[10];
    char gender;
    int  age;
};


int main() {
    struct person mc[3] = {
        {"홍길동", 'M', 23}, 
        {"김가을", 'W', 23}, 
        {"이겨래", 'M', 23}
    };

    printf("%6s \t %6s %8s %6s\n", "순서", "성명", "성별", "나이");
    
    for (int i = 0; i < 3; i++) {
        printf("%4d\t", i + 1);
        printf("%8s %5c %4d\n", mc[i].name, mc[i].gender, mc[i].age);
    }

    return 0;
}
