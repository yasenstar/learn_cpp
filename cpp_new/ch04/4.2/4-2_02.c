#include <stdio.h>
#include <stdlib.h>

int main() {
    int x = 8, y = 20;
    printf("x = %d, y = %d\n", x, y);
    if (x>y) {
        printf("x > y\n");
    }
    else {
        printf("x <= y\n");
    }
    system("pause");
    return 0;
}