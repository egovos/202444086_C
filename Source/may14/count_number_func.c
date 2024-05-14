#include <stdio.h>
#define MAX_NUMBERS 100
#define RANGE 10

void read_numbers(int numbers[], int n);
void calculate_frequency(int numbers[], int n, int frequency[]);
void print_frequency(int frequency[], int range);

int main() {
    int n;

    printf("수를 입력하세요. (최대 %d): ", MAX_NUMBERS);
    scanf("%d", &n);

    if (n < 1 || n > MAX_NUMBERS) {
        printf("잘못된 수를 입력하셨습니다.\n");
        
        return 1;
    }

    int numbers[n];
    read_numbers(numbers, n);

    int frequency[RANGE] = {0};

    calculate_frequency(numbers, n, frequency);

    print_frequency(frequency, RANGE);

    return 0;
}

void read_numbers(int numbers[], int n) {
    printf("%d개의 숫자를 입력하세요(0~9): ", n);
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);

        if (numbers[i] < 0 || numbers[i] > 9) {
            printf("잘못된 수를 입력하셨습니다. 다시 입력해 주세요.\n");

            i--;
        }
    }
}

void calculate_frequency(int numbers[], int n, int frequency[]) {
    for (int i = 0; i < n; i++) {
        frequency[numbers[i]]++;
    }
}

void print_frequency(int frequency[], int range) {
    for (int i = 0; i < range; i++) {
        printf("숫자 %d: %d개 있음\n", i, frequency[i]);
    }
}
