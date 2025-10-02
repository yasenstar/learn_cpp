#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable: 4996)

int main() {
    int M, N, i, j, k, a = 1, b = 1;
    int z = 0, len = 0, row = -1, col = -1;
    int is = 0, ie = 0, js = 0, je = 0, C = 0;
    double p, ** q;

    scanf("%d", &M);
    scanf("%d", &N);
    scanf("%lf", &p);
    q = (double**)malloc(sizeof(double*) * M);
    for (k = 0; k < M; k++) {
        q[k] = (double*)malloc(sizeof(double) * N);
    }
    
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            scanf("%lf", &q[i][j]);
            q[i][j] = (q[i][j] > p) ? 1 : 0;
        }
    }

    for(i = 0; i < M; i++){
        for (j = 0; j < N; j++) {
            if (q[i][j] == 0) {
                if (z == 0) {
                    len = j;
                    z = j;
                    row = i;
                }
                else {
                    if (j - z - 1 > len) {
                        len = j - z - 1;
                        z = j;
                        row = i;
                    }
                }
                printf("row:len = %d\n", len);
            }
        }
        z = 0;
        printf("row = %d\n", row);
    }

    for (j = 0; j < N; j++) {
        for (i = 0; i < M; i++) {
            if (q[i][j] == 0) {
                if (z == 0) {
                    len = i;
                    z = j;
                    col = 0;
                }
                else {
                    if (i - z - 1 > len) {
                        len = i - z - 1;
                        z = i;
                        col = j;
                    }
                }
                printf("col:len = %d\n", len);
            }
        }
        z = 0;
        printf("col = %d\n", col);
    }

    if (col < 0) {
        ie = z - 1;
        is = z - len;
        je = row;
        js = row;

        for (i = row + 1; i < M; i++) {
            for (j = z - len + 1; j < z; j++) {
                if (q[i][j] == 0) {
                    break;
                }
            }
            je++;
        }
    }
    else {
        is = col;
        ie = col;
        js = z - len;
        je = z - 1;
        for (j = col + 1; j < N; j++) {
            for (i = z - len + 1; i < z; i++) {
                if (q[i][j] == 0) {
                    break;
                }
            }
            ie++;
        }
    }
    C = 2 * (ie - is + 1) * (je - js + 1);

    printf("%d %d\n", is, ie);
    printf("%d %d\n", js, je);
    printf("%d\n", C);

    for (k = M - 1; k >= 0; k--) {
        free(q[k]);
    }
    free(q);
    return 0;
}
