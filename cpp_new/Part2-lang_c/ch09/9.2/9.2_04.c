#include <stdio.h>

int main() {
    int *pmax, *pmin, *p, a, b;
    a = 5;
    b = 8;
    pmax = &a;
    pmin = &b;
    if (a < b) {
        p = pmax;
        pmax = pmin;
        pmin = p;
    }
    printf("a = %d, b = %d\n", a, b);
    printf("max = %d, min = %d\n", *pmax, *pmin);
    return 0;
}