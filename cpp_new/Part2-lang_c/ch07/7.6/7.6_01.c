#include <stdio.h>

void funcTest() {
    int c = 4;
    printf("c = %d\n", c);
    c++;
}

int main() {
    funcTest();
    funcTest();
    funcTest();
    return 0;
}