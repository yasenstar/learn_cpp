#include <stdio.h>
// #include <myprint.h>

void printHello() {
    printf("hello, from my function, how are you!\n");
}

void printNew() {
    printf("今天是个好天气!\n");
}

int main() {
    printHello();
    printHello();
    printNew();
    // printMath();
    return 0;
}

// [{
// 	"resource": "/d:/GitHub/learn_cpp/cpp_new/Part2-lang_c/ch07/7.1/7.1_02.cpp",
// 	"owner": "cpptools",
// 	"severity": 8,
// 	"message": "myprint.h: No such file or directory",
// 	"source": "gcc",
// 	"startLineNumber": 2,
// 	"startColumn": 10,
// 	"endLineNumber": 2,
// 	"endColumn": 10
// }]