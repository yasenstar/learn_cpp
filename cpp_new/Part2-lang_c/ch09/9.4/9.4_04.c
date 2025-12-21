#include <stdio.h>
#include <string.h>

int main() {
    char a[] = "I love China!";
    char b[100];
    char *p1, *p2;
    p1 = a;
    p2 = b;
    printf("p1 = %s, p2 = %s\n", p1, p2);
    for (; *p1!='\0'; p1++, p2++) {
        *p2 = *p1;
        printf("p1 = %s, p2 = %s, %d\n", p1, p2, strlen(p2));
    }
    *p2 = '\0';
    printf("a = %s, b = %s, %d\n", a, b, strlen(b));
    printf("p1 = %s, p2 = %s, %d\n", p1, p2, strlen(p2));
    return 0;
}