#include <stdio.h>

void func1(int tmpvalue);

int main() {
    int m, n;
    int k = 4;
    func1(k);
    return 0;
}

void func1(int tmpvalue) {
    int x, y;
    x = 5;
    y = 6;
    printf("%d", x + y - tmpvalue);
}