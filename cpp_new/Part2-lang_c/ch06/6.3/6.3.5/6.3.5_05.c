#include <stdio.h>
#include <string.h>

int main() {
    char str1[120] = "ope1";
    char str2[150] = "断点abc这停";
    char str3[100] = "我爱中国";
    printf("%d %d %d\n", strlen(str1), strlen(str2), strlen(str3));
    printf("%d %d %d\n", sizeof(str1), sizeof(str2), sizeof(str3));
    return 0;
}