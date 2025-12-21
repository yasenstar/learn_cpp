#include <stdio.h>
#include <string.h>

int main() {
    char a[] = "I love China!";
    char b[100];
    printf("a = %s, b = %s\n", a, b);
    int i;
    for (i = 0; *(a+i)!='\0'; i++) {
        *(b+i) = *(a+i);
    }
    *(b + i) = 'y';
    *(b + i + 1) = 'x';
    printf("a = %s, b = %s, %d\n", a, b, strlen(b));
    *(b + i) = '\0';
    *(b + i + 1) = 'x';
    printf("a = %s, b = %s, %d\n", a, b, strlen(b));
    for (i = 0; b[i]!='\0'; i++) {
        printf("%c", b[i]);
    }
    printf("\n");
    return 0;
}