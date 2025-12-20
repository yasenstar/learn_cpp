#include <stdio.h>

int main() {
    int row = 3, col = 5;
    int a[row][col], i, j, *p;
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            a[i][j] = i+j;
        }
    }
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("a[%d][%d] = %d   ", i, j, a[i][j]);
        }
        printf("\n");
    }
    p = (int *)a;
    printf("===test two dimension array with pointers:\n");
    printf("a = %d; a+1 = %d; a+2 = %d\n", a, a+1, a+2);
    printf("a[0] = %d, &a[0][0] = %d, *a = %d, *(a+0) = %d, &a[0] = %d\n", a[0], &a[0][0], *a, *(a+0), &a[0]);
    printf("a[1] = %d, &a[1][0] = %d, *a = %d, *(a+1) = %d, &a[1] = %d\n", a[1], &a[1][0], *a, *(a+1), &a[1]);
    printf("a[2] = %d, &a[2][0] = %d, *a = %d, *(a+2) = %d, &a[2] = %d\n", a[2], &a[2][0], *a, *(a+2), &a[2]);
    return 0;
}