#include <stdio.h>

int a = 4, b = 5;

void lookValue(int a, int b) {
    a = 123;
    b = 456;
}

int main() {
    int i = 2, j = 5;
    lookValue(i,j);

    printf("a = %d\n", a);
    printf("b = %d\n", b);
}