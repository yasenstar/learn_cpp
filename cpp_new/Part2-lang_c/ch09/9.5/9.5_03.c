#include <stdio.h>

int max(int x, int y) {
    if (x > y) {
        return x;
    }
    else {
        return y;
    }
}

int min(int x, int y) {
    if (x < y) {
        return x;
    }
    else {
        return y;
    }
}

int add(int x, int y) {
    return x + y;
}

int myFunc(int x, int y, int (*midfunc)(int, int)) {
    int result = midfunc(x, y);
    return result;
}

int main() {
    int a = 5, b = 19, c;

    c = max(a, b);
    printf("The bigger one of %d and %d is %d\n", a, b, c);

    c = min(a, b);
    printf("The smaller one of %d and %d is %d\n", a, b, c);

    int (*p)(int, int);

    p = max;
    c = myFunc(a, b, p);
    printf("The bigger one of %d and %d is %d\n", a, b, c);

    p = min;
    c = myFunc(a, b, p);
    printf("The smaller one of %d and %d is %d\n", a, b, c);

    p = add;
    c = myFunc(a, b, p);
    printf("%d + %d is %d\n", a, b, c);

    return 0;
}