#include <stdio.h>

int main() {
    int (*p)[10];
    int row = 10, a[10];
    for (int i = 0; i < row; i++) {
        a[i] = i * i;
    }
    for (int i = 0; i < row; i++) {
        printf("a[%d] = %d, ", i, a[i]);
    }
    printf("\n");
    p = &a;
    int *q;
    q = (int *)p;
    for (int i = 0; i < row; i++) {
        printf("*q = %d, ", *q);
        q++;
    }
    printf("\n");
    return 0;
}