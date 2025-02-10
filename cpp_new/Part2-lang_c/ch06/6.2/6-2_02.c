#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j, a[10][10];
    for (i=1; i<=9; i++) {
        for (j=1; j<=i; j++) {
            a[i][j] = i * j;
        }
    }
    for (i=1; i<=9; i++) {
        for (j=1; j<=i; j++) {
        printf("%d x %d = %d\t", j, i, a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}