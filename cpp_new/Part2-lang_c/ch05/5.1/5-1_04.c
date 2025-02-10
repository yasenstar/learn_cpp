#include <stdio.h.>
#include <stdlib.h>

int main() {
    int i = 1, sum = 0;
    do {
        sum += i;
        i++;
    }
    while (i<=100);
    printf("sum 1 to 100 results: %d\n", sum);
    system("pause");
    return 0;
}