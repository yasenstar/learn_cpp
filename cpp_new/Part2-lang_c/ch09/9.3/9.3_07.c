#include <stdio.h>

void changeValue(int ba[]) {
    ba[1] = 9000;
    ba[3] = 8500;
}

int main() {
    int a[5], i;
    a[0] = 85; a[1] = 70; a[2] = 98; a[3] = 92; a[4] = 78;
    for (i = 0; i < 5; i++) {
        printf("a[%d] = %d\n", i, a[i]);
    }
    int *pa = a;
    changeValue(pa);
    printf("---------------------\n");
    for (i = 0; i < 5; i++) {
        printf("a[%d] = %d\n", i, a[i]);
    }
}