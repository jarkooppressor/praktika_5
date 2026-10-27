#include <stdio.h>

int main(void) {
    int N;
    int i;
    double sum;

    while (scanf("%d", &N) == 1 && N > 0) {
        sum = 0.0;

        for (i = 1; i <= N; i++) {
            sum = sum + (double) i* i * i;
        }
        printf("SUM: %.6f\n", sum);
    }
    return 0;
}