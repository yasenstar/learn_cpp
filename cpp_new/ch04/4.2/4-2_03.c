#include <stdio.h>
#include <stdlib.h>

int main() {
    int number = 480;
    int cost = 0;
    if (number > 500) {
        cost = 1;
    }
    else if (number > 400) {
        cost = 2;
    }
    else if (number > 300) {
        cost = 3;
    }
    else {
        cost = 4;
    }
    printf("cost = %d\n", cost);
    system("pause");
    return 0;
}