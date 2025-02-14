#include <stdio.h>
// #include <stdlib.h>

int main() {
    int i;
    char c[10];
    c[0] = 'I';
    c[1] = ' ';
    c[2] = 'a';
    c[3] = 'm';
    c[4] = ' ';
    c[5] = 'h';
    c[6] = 'a';
    c[7] = 'p';
    c[8] = 'p';
    c[9] = 'y';
    for (i=0;i<=9;i++) {
        printf("%c", c[i]);
    }
    printf("\n");
    return 0;
}