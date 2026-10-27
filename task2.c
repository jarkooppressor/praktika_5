#include <stdio.h>

#define HEIGHT 5

int main(void) {
    int pesok, chasi, anton;

    for (pesok = 0; pesok < 3; pesok++) {
        for (chasi = 0; chasi < pesok; chasi++)
            printf(" ");
        for (anton = 0; anton < HEIGHT -2 * pesok; anton++)
            printf("&");
        printf("\n");
    }

    for (pesok = 1; pesok >= 0; pesok--) {
        for (chasi = 0; chasi < pesok; chasi++)
            printf(" ");
        for (anton = 0; anton < HEIGHT - 2 * pesok; anton++)
            printf("&");
        printf("\n");
    }
    return 0;
}