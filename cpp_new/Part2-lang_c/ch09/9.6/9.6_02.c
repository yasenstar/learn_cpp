#include <stdio.h>

int main() {
    // char *pName[] = {"C++", "Java", "Python", "Go", "C#"};
    // char **p;
    // p = &pName[0];
    // printf("p = %s\n", *(p+1)+1);

    int abc = 5;
    int *pabc = &abc;
    int **ppabc = &pabc;
    printf("abc = %d, &pabc = %d, &ppabc = %d\n", abc, pabc, ppabc);
    printf("abc = %d, *pabc = %d, **ppabc = %d\n", abc, *pabc, **ppabc);
    return 0;
}