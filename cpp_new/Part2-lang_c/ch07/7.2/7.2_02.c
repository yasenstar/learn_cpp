#include <stdio.h>

void qtfunc1();
void qtfunc2();
void qtfunc3();

void qtfunc1() {
    printf("qtfunc1 开始执行() ---------------------\n");
    qtfunc2();
    printf("qtfunc1 结束执行() ---------------------\n");
}

void qtfunc2() {
    printf("qtfunc2 开始执行() ---------------------\n");
    qtfunc3();
    printf("qtfunc2 结束执行() ---------------------\n");
}

void qtfunc3() {
    printf("qtfunc3 开始执行() ---------------------\n");
    printf("qtfunc3 结束执行() ---------------------\n");
}

int main() {
    qtfunc1();
    qtfunc2();
    qtfunc3();
    return 0;
}