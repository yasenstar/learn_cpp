#include <stdio.h>

int main() {
    int a=1, b=2;

    {
        int c;
        c = a + b;
        printf("C = %d\n", c);
    }

    // c = a + b;
    // printf("C = %d\n", c);
}

// [{
// 	"resource": "/d:/GitHub/learn_cpp/cpp_new/Part2-lang_c/ch07/7.5/7.5_02.c",
// 	"owner": "cpptools",
// 	"severity": 8,
// 	"message": "'c' was not declared in this scope",
// 	"source": "gcc",
// 	"startLineNumber": 12,
// 	"startColumn": 5,
// 	"endLineNumber": 12,
// 	"endColumn": 5
// }]