#include <stdio.h>

void funcTest() {
    static int c = 4;
    // static int c;
    printf("c = %d\n", c);
    c++;
}

int main() {
    funcTest();
    funcTest();
    funcTest();
    return 0;
}