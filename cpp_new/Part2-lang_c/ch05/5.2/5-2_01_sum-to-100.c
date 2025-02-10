#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, sum = 0;
    for (i=1; i<=100; i++) {
        sum = sum + i;
    }
    printf("sum 1 to 100 results: %d\n", sum);
    system("pause");
    return 0;
}