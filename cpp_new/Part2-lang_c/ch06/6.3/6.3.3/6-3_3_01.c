#include <stdio.h>
// #include <stdlib.h>

int main() {
    int i;
    char c[10] = {'I', ' ', 'a', 'm', ' ', 'h', 'a', 'p', 'p', 'y'};
    for (i=0;i<=9;i++) {
        printf("%c", c[i]);
    }
    printf("\n");
    return 0;
}