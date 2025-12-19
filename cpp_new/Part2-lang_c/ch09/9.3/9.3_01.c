#include <stdio.h>

int main() {
    int a[5];
    a[0] = 5; a[1] = 6; a[2] = 7; a[3] = 8; a[4] = 9;
    int *p;
    p = &a[0]; // equivalent as `int *p = a` or `int *p = &a[0]`
    int i;
    for (i = 0; i<5; i++) {
        printf("a[%d] = %d, address of a[%d] = %d\n", i, a[i], i, &a[i]);
    }
    printf("address of array pointer p = %d\n", p);
}