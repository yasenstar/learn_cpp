#include <stdio.h>
#include <stdlib.h>

int main() {
    // standard IF statement
    int a = 4, b = 5, max1;
    if (a>b) {
        max1 = a;
    }
    else {
        max1 = b;
    }
    printf("Max1 = %d\n", max1);
    // simplified by condition operator
    int max2;
    max2 = (a<b)?a:b;
    printf("Max2 = %d\n", max2);
    
    system("pause");
    return 0;
}