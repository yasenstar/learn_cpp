#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j, a[3][4];
    for (i=0; i<=2; i++) {
        for (j=0; j<=3; j++) {
            a[i][j] = i * j;
        }
    }
    for (i=0; i<=2; i++) {
        for (j=0; j<=3; j++) {
        printf("a[%d][%d] = %d\t", i, j, a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}