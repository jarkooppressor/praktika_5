#include <stdio.h>
#include <math.h>

int main(void) {
    double A = 0.0;
    double B = 3.141592653589793;
    double H = 0.5;
    int gennadiy = 0;
    double x, y;
    for (x = A; x <= B + 0.000001; x = x + H) {
        y =cos(2.0 * x) + 1.0;
        printf("%d %.4f %.4f\n", gennadiy, x, y);
        gennadiy = gennadiy + 1;
    }
    return 0;
}