#include <stdio.h>
#define PI 3.1415926535

int main() {
    float ftmp;
    ftmp = 2 * PI;
    printf("ftmp = %f\n", ftmp);
    return 0;
}

#undef PI

void func1() {
    float ftmp1;
    ftmp1 = PI * 2;
}

// Error Msg:
// 'PI' was not declared in this scope
// identifier "PI" is undefined
// expected a declaration
// D:\GitHub\learn_cpp\cpp_new\Part2-lang_c\ch08\8.1\8.1_02.c:15:13: error: 'PI' was not declared in this scope
//    15 |     ftmp1 = PI * 2;
//       |