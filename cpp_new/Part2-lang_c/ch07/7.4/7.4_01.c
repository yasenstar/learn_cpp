#include <stdio.h>

int findMax(int x, int y) {
    if (x > y) {
        return x;
    }
    else {
        return y;
    }
}

int main() {
    int a[10];
    a[7] = 25;
    a[4] = 7;
    int tempmax = findMax(a[7], a[4]);
    printf("Max Number of %d and %d is %d\n", a[7], a[4], tempmax);
    return 0;
}