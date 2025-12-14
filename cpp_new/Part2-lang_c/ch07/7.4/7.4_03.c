#include <stdio.h>

void changeValue(int b[5][8]) {
    b[0][2] = 25;
}

int main() {
    int a[5][8], i, j;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 8; j++) {
            a[i][j] = 0;
        }
        printf("\n");
    }
    a[0][2] = 12;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 8; j++) {
            printf("a[%d][%d] = %d\t", i, j, a[i][j]);
        }
        printf("\n");
    }
    changeValue(a);
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 8; j++) {
            printf("a[%d][%d] = %d\t", i, j, a[i][j]);
        }
        printf("\n");
    }
}