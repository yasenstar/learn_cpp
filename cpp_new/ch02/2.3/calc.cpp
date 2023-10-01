#include <iostream>

int main() {
    // 2.3.1 assignment sign
    // int a;
    // // a = 5;
    // a = 6.5;
    // // a = 18+50;
    // // printf("a = %d\n", a);

    // // 2.3.1 复合赋值
    // a += 3;
    // printf("a = %d\n", a);

    // 2.3.2 逗号运算符和表达式
    int a;
    a = (4, 5); // a = 5
    a = (3+5, 6+8); // a = 14
    a = 3*5,a*4; // first a = 15, then a*4 = 60
    printf("a = %d\n", a); // why it's still a=15?
    printf("a = %d\n", (a=3*5,a*4)); // if print with (), then result is 60
}
