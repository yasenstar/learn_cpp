#include <stdio.h>
#include <string.h>

void copyStr(char *from, char *to) {
    while (*from) {
        *to++ = *from++;
    }
    *to = '\0';
}

int main() {
    char a[] = "this is the source content, 这是原始内容";
    char b[] = "this is a special test, will be overwritten! will be overwritten! will be overwritten!";
    printf("a = %s, len(a) = %d\nb = %s, len(b) = %d, b[70] = %c\n", a, strlen(a), b, strlen(b), b[64]);
    copyStr(a, b);
    printf("a = %s, len(a) = %d\nb = %s, len(b) = %d, b[70] = %c\n", a, strlen(a), b, strlen(b), b[64]);
    return 0;
}