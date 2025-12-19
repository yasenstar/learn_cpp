#include <stdio.h>

int main() {
    int a[5], *p, i;
    a[0] = 12; a[1] = 14; a[2] = 20; a[3] = 18; a[4] = 50;
    for (i = 0; i < 5; i++) {
        printf("a[%d] = %d, address = %d\n", i, a[i], &a[i]);
    }
    for (i = 0; i < 5; i++) {
        printf("*(a+%d) = %d\n", i, *(a+i));
    }
    for (p = a; p < (a + 5); p++) {
        printf("*%d = %d\n", p, *p);
    }
}