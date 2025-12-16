#include <stdio.h>

#define PI 3.1415926
#define S(r) PI*r*r

int main() {
    float area;
    area = S((1+5));
    printf("Area = %f\n", area);
    return 0;
}