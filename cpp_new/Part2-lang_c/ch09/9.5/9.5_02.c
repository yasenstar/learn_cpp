#include <stdio.h>

int max(int x, int y) {
    if (x > y) {
        return x;
    }
    else {
        return y;
    }
}

int main() {
    int a = 5, b = 39;
    int (*p)(int x, int y);
    p = max;
    printf("max of %d & %d is %d\n", a, b, (*p)(a, b));
    return 0;
}