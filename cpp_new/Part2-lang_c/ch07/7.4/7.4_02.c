#include <stdio.h>

void changeValue(int b[]) {
    b[2] = 72;
    b[4] = 45;
    // b[7] = 95; // 此处对超出实参数组范围的内存地址进行了赋值
}

int main() {
    int a[5];
    int i;
    a[0] = 85; a[1] = 70; a[2] = 98; a[3] = 92; a[4] = 78;
    for (i = 0; i < 5; i++) {
        printf("a[%d] is %d\t", i, a[i]);
    }
    printf("\n");
    changeValue(a);
    for (i = 0; i < 5; i++) {
        printf("a[%d] is %d\t", i, a[i]);
    }
    printf("\n");
}