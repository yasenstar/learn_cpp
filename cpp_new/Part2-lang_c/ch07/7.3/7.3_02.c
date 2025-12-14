#include <stdio.h>

int factorial(int n) {
    int result;
    if (n == 1) {
        result = 1;
        printf("中间结果：%d\n", result);
    }
    else {
        result = factorial(n-1) * n;
        printf("中间结果：%d\n", result);
    }
    return result;
}

int main() {
    int x = 10;
    printf("%d的阶乘结果是%d。\n", x, factorial(x));
    return 0;
}