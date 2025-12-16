#include <stdio.h>

// #define MYPI 1

int main() {
    #if MYPI
        printf("MYPI is defined\n");
    #else
        printf("MYPI is not defined\n");
    #endif
    return 0;
}