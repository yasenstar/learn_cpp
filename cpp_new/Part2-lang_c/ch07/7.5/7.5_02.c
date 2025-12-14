#include <stdio.h>

int main() {
    int a=1, b=2;

    {
        int c;
        c = a + b;
        printf("C = %d\n", c);
    }

    // c = a + b;
    // printf("C = %d\n", c);
}