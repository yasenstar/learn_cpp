#include <stdio.h>
#include <stdlib.h>

int main() {
    void func1() {
        lbl1: int k;
        k = 1;
        if (k<3) {
            printf("k=%d\n", k);
            k++;
            // got lbl1;   // correct, but loop forever
            // goto lbl2; // error: label 'lbl2' used but not defined
        }
    }
    void func2() {
        lbl2: int a;
        a = 2;
        printf("a=%d\n", a);
    }
    func1();
    system("pause");
    return 0;
}