#include <stdio.h>
int Fact(int n);

int main() {
    int input, result;

    printf("전달> 팩토리얼 구할 정수 입력: ");
    scanf("%d", &input);
    printf("호출> Fact() 함수 호출하여 팩토리얼 계산\n");

    result = Fact(input);

    printf("회신> %d\n", result);

    return 0;
}

int Fact(int n) {
   if (n <= 1) {
    return 1;
   } 
   else {
    return (n * Fact(n - 1));
   }
}
