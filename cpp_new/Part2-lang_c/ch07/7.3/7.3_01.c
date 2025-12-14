#include <stdio.h>

void recuFunc() {
    printf("Recursion Function 执行\n");
    recuFunc();
}

int main() {
    recuFunc();
}

// 警告：这是一个无限调用的递归调用，请谨慎执行！