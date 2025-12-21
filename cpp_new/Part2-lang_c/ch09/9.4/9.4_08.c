#include <stdio.h>
#include <string.h>

int main() {
    char a[100] = "I love China!";
    printf("a = %s\n", a);

    char b[100];
    // b = "I love China";
    b[0] = 'I';
    b[1] = '\0';
    printf("b = %s\n", b);

    char c[100];
    strcpy(c, "I love China!");
    printf("c = %s\n", c);

    char *d;
    d = "I love China!";
    printf("*d = %c, &*d = %d, d = %s, *(d+4) = %c\n", *d, &*d, d, *(d+4));

    const char *e = "I love China!";
    printf("e = %s\n", e);
    // e = e + 7;
    printf("e+7 = %s\n", e + 7);
    printf("e = %s\n", e);

    return 0;
}