#include <stdio.h>
#include <stdlib.h>
int main() {
    int a, b, c;
    a = 5; b = 4; c = 6;
    printf("%d \n", c > a + b);
    printf("%d \n", a > b == c);
    printf("%d \n", a == b < c);
    printf("%d \n", a = b > c);
    system("pause");
    return 0;
}