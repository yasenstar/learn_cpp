#include <stdio.h>

int main() {
    int i = 7, j = 9;
    printf("i = %d, j = %d\n", i, j);
    printf("address &i = %d, &j = %d\n", &i, &j);
    float k = 12.6f;
    printf("floating variable k = %f\n", k);
    printf("address &k = %d\n", &k);
    int *mypoint1, *mypoint2;
    mypoint1 = &i;
    mypoint2 = &j;
    printf("pointer variable mypoint1 = %d, mypoint2 = %d\n", mypoint1, mypoint2);
    float *mypoint3 = &k;
    printf("pointer variable mypoint3 = %d\n", mypoint3);
}