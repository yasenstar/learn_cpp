#include <stdio.h>
#define PI 3.1415926535
#define DPI 2*PI
#define DPICPI PI*DPI

int main() {
    float ftmp;
    ftmp = 2 * PI;
    printf("ftmp = %f, %f, %f\n", ftmp, DPI, DPICPI);
    return 0;
}