#include <stdio.h>

int main(void) {
    double arr[8];
    int z;

    arr[0] = 0.0;
    arr[1] = 1.0;
    for (z = 2; z < 8; z++)
        arr[z] = 2.0 * arr[z - 1] + arr[z - 2];
    for (z = 0; z < 8; z++)
        printf("%.2f%c", arr[z], (z == 7) ? '\n' : ' ');
    
    double max_val = arr[0];
    for (z = 1; z < 8; z++)
        if (arr[z] > max_val)
           max_val = arr [z];
    printf("%.2f\n", max_val);
    return 0;
}

/* вообще в задании непонятка с какой цифры Пеля - 0 или 1 - надо начать считать
 * если с 1, то arr 0 и arr 1 меняется на arr 1 и arr 2 */