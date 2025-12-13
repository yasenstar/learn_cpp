#include <stdio.h>
#include "myprint.h"

void printHello() {
    printf("hello, from my function, how are you!\n");
}

void printNew() {
    printf("今天是个好天气!\n");
}

int main() {
    printHello();
    printHello();
    printNew();
    printMath(5,6);
    return 0;
}
