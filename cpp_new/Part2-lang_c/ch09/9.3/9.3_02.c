#include <stdio.h>

int main() {
    int a[5];
    a[0] = 5; a[1] = 16; a[2] = 7; a[3] = 8; a[4] = 9;
    int *p;
    p = &a[0]; // equivalent as `int *p = a` or `int *p = &a[0]`
    int i;
    for (i = 0; i<5; i++) {
        printf("a[%d] = %d, address of a[%d] = %d\n", i, a[i], i, &a[i]);
    }
    printf("address of array pointer p = %d, value = %d\n", p, *p);
    printf("address of array pointer p+1 = %d, value = %d\n", p+1, *(p+1));
    *p = 19;
    for (i = 0; i<5; i++) {
        printf("a[%d] = %d, address of a[%d] = %d\n", i, a[i], i, &a[i]);
    }
    printf("address of array pointer p = %d, value = %d\n", p, *p);
    printf("address of array pointer p+1 = %d, value = %d\n", p+1, *(p+1));
    p=p+1;
    for (i = 0; i<5; i++) {
        printf("a[%d] = %d, address of a[%d] = %d\n", i, a[i], i, &a[i]);
    }
    printf("address of array pointer p = %d, value = %d\n", p, *p);
    printf("address of array pointer p+1 = %d, value = %d\n", p+1, *(p+1));
    p = a + 2;
    for (i = 0; i<5; i++) {
        printf("a[%d] = %d, address of a[%d] = %d\n", i, a[i], i, &a[i]);
    }
    printf("address of array pointer p = %d, value = %d\n", p, *p);
    printf("address of array pointer p+1 = %d, value = %d\n", p+1, *(p+1));
}