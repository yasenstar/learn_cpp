#include <stdio.h>
#include <string.h>

int main() {
    char str1[4] = "one";
    char str2[15] = "two";
    printf("%s %s \n", str1, str2);
    printf("%d %d \n", sizeof(str1), sizeof(str2));
    strcat(str1, str2);
    printf("%s %s \n", str1, str2);
    printf("%d %d \n", sizeof(str1), sizeof(str2));
    return 0;
}