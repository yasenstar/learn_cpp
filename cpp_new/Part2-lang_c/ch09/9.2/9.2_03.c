#include <stdio.h>

int main() {
    int a, b;
    int *p1, *p2;
    a = 100;
    b = 200;
    p1 = &a;
    p2 = &b;
    int *p3 = &a;
    printf("a = %d, b = %d\n", a, b);
    printf("&a = %d, &b = %d\n", &a, &b);
    printf("p1 = %d, p2 = %d, p3 = %d\n", p1, p2, p3);
    printf("%d\n", p1 == &*p1);
    printf("%d, %d\n", a == *&a, *p1 == a);
    printf("a = %d, a++ = %d, *p1 = %d, (*p1)++ = %d\n", a, a++, *p1, (*p1)++);
    printf("a = %d, a++ = %d, p1++ = %d, *p1++ = %d\n", a, a++, p1++, *p1++);
    return 0;
}