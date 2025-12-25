#include <stdio.h>

void printBinary(int num) {
    for (int i = sizeof(int) * 8 - 1; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
    printf("\n");
}

int main() {
    printf("0 & 0 = %d\n", 0 & 0);
    printf("0 & 1 = %d\n", 0 & 1);
    printf("1 & 0 = %d\n", 1 & 0);
    printf("1 & 1 = %d\n", 1 & 1);
    printf("100110 & 010110 = ");
    printBinary(0b100110 & 0b010110);
    printf("\n");

    printf("0 | 0 = %d\n", 0 | 0);
    printf("0 | 1 = %d\n", 0 | 1);
    printf("1 | 0 = %d\n", 1 | 0);
    printf("1 | 1 = %d\n", 1 | 1);
    printf("100110 | 010110 = ");
    printBinary(0b100110 | 0b010110);
    printf("\n");

    printf("~100110 = ");
    printBinary(~0b100110);
    printf("\n"); 

    printf("100110 ^ 010110 = ");
    printBinary(0b100110 ^ 0b010110);
    printf("\n");
    
    printf("<< 01111 = ");
    printBinary(0b001111 << 2);
    printf("\n"); 

    printf(">> 1111 = ");
    printBinary(0b1111 >> 1);
    printf("\n"); 
    return 0;
}