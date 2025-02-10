#include <stdio.h>
#include <stdlib.h>
int main() {
    int i, j, result;
    int iCount = 0;
    for (i=1;i<=9;i++) {
        for (j=1;j<=i;j++) {
            result = i * j;
            printf("%d x %d = %d\t", j, i, result);
            iCount++;
        }
        printf("\n");
    }
    printf("total inner looping count is %d\n", iCount);
    system("pause");
    return 0;
}