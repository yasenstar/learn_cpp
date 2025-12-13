#include <stdio.h>

int testF() {
    return 3.45F;
}

int main() {
    float a;
    a = testF();
    printf("%.3f\n", a);
    return 0;
}