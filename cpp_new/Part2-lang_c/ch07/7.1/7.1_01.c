#include <stdio.h>

int main() {
    printHello();
    return 0;
}

void printHello() {
    printf("hello, from my function, how are you!\n");
}

// Error Message: [{
// 	"resource": "/d:/GitHub/learn_cpp/cpp_new/Part2-lang_c/ch07/7.1/7.1_01.c",
// 	"owner": "cpptools",
// 	"severity": 8,
// 	"message": "'printHello' was not declared in this scope",
// 	"source": "gcc",
// 	"startLineNumber": 4,
// 	"startColumn": 5,
// 	"endLineNumber": 4,
// 	"endColumn": 5
// }]