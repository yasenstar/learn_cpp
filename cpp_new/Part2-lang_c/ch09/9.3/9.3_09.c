#include <stdio.h>

int main() {
    int row = 3, col = 4, a[row][col], *p[row][col];
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            a[i][j] = i + j;
        }
    }
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("a[%d][%d] = %d   ", i, j, a[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            p[i][j] = &(a[i][j]);
            printf("a[%d][%d] = %d  %d  %d  %d, ", i, j, a[i][j], &(a[i][j]), p[i][j], *p[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("*p[%d][%d] = %d   ", i, j, *p[i][j]);
        }
        printf("\n");
    }
    return 0;
}