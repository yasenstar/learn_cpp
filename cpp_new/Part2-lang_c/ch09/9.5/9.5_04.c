#include <stdio.h>

int sum;

int * add(int x, int y) {
    sum = x + y;
    return &sum;
}

int main() {
    int *presult;
    presult = add(4, 5);
    printf("result = %d\n", *presult);
    return 0;
}