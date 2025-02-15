#include <stdio.h>

int main() {
    char c[100];
    // printf("Please input a string: ");
    scanf("%s", c);
    printf("%s\n", c);
    printf("%c\n", c[1]);
    return 0;
}