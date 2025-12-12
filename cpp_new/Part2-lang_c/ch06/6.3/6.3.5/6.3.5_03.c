#include <stdio.h>
#include <string.h>

int main() {
    char str1[10] = "one1234";
    char str2[15] = "two12345678";
    printf("%s %s\n", str1, str2);
    printf("%s %s %s\n", strcpy(str1, str2), str1, str2);
}