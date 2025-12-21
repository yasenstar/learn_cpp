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
    int a = 5, b = 39, c;
    c = max(a, b);
    printf("max of %d & %d is %d\n", a, b, c);
    return 0;
}