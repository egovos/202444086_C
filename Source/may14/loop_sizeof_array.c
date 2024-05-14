#include <stdio.h>

int main() {
    int score[5] = {87, 92, 89, 98, 78};
    int cnt;
    
    //score는 총 20바이트고 score[0]는 4바이트로 20 / 4 = 5 (array.size())
    for (cnt = 0; cnt < sizeof(score) / sizeof(score[0]); cnt++) {
        printf("score[%d]: %d\n", cnt, score[cnt]);
    }

    return 0;
}
