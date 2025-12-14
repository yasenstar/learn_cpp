#include <stdio.h>

int c1, c2;

void lookValue() {
    c1 = 5;
    c2 = 8;
}

int main() {
    lookValue();
    printf("c1 = %d\n", c1);
    printf("c2 = %d\n", c2);
    return 0;
}