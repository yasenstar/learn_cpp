#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, a[10];
    for (i=0; i<=9; i++) {
        a[i] = i;
    }
    for (i=0; i<=9; i++) {
        printf("a[%d] = %d\t", i, a[i]);
    }
    printf("\n");
    for (i=9; i>=0; i--) {
        printf("a[%d] = %d\t", i, a[i]);
    }
    system("pause");
    return 0;
}