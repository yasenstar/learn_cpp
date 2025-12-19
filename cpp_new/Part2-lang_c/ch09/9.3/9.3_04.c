#include <stdio.h>

void changeValue(int ba[]) {
    ba[2] = 90;
    ba[4] = 85;
    // ba[10] = 79; // this is over the a[5] range, leads program not stop
}

int main() {
    int a[5], i;
    a[0] = 85; a[1] = 70; a[2] = 98; a[3] = 92; a[4] = 78;
    for (i = 0; i < 5; i++) {
        printf("a[%d] = %d\n", i, a[i]);
    }
    changeValue(a);
    for (i = 0; i < 5; i++) {
        printf("a[%d] = %d\n", i, a[i]);
    }
}