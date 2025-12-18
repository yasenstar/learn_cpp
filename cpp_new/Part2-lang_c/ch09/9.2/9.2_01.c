#include <stdio.h>

int main() {
    int i = 7, j = 9;
    printf("i = %d, j = %d\n", i, j);
    printf("address &i = %d, &j = %d\n", &i, &j);
    float k = 12.6f;
    printf("floating variable k = %f\n", k);
    printf("address &k = %d\n", &k);
    int *mypoint1, *mypoint2;
    // mypoint1 = i;
    mypoint1 = &i;
    mypoint2 = &j;
    printf("pointer variable mypoint1 = %d, mypoint2 = %d\n", mypoint1, mypoint2);
    float *mypoint3 = &k;
    printf("pointer variable mypoint3 = %d\n", mypoint3);
}

// Error message for line 11:
// [{
// 	"resource": "/d:/GitHub/learn_cpp/cpp_new/Part2-lang_c/ch09/9.2/9.2_01.c",
// 	"owner": "makefile-tools",
// 	"severity": 8,
// 	"message": "invalid conversion from 'int' to 'int*' [-fpermissive]",
// 	"source": "gcc",
// 	"startLineNumber": 11,
// 	"startColumn": 16,
// 	"endLineNumber": 11,
// 	"endColumn": 16
// }]