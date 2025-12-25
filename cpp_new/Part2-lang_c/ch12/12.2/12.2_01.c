#include <stdio.h>
// #pragma warning(disable: 4996)

int main() {
    FILE *fp;
    fp = fopen("A1", "r");
    fclose(fp);
    return 0;
}