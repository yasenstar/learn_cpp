#include <stdio.h>
#include <stdlib.h>
int main() {
    int a = 1;
    if (3 < 5 && (a = 8)) {
        printf("running inside.\n");
    }
    if (3 > 5 && (a = 10)) {
        printf("running inside 2nd.\n");
    }
    printf("a = %d\n", a);
    system("pause");
    return 0;
}