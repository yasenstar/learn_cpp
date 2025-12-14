// 汉诺塔问题 - HanoiTower

#include <stdio.h>

void Move(char A, char C, int n) {
    printf("把第%d个盘子从%c移动到%c\n", n, A, C);
}

void HanoiTower(char A, char B, char C, int n) {
    if (n == 1) {
        Move(A, C, n);
    }
    else {
        // 将n-1个盘子从A柱借助于C柱移动到B柱上
        HanoiTower(A, C, B, n-1);
        // 将A柱上的最后一个盘子直接移动到C柱上
        Move(A, C, n);
        // 将n-1个盘子从B柱借助于A柱移动到C柱上
        HanoiTower(B, A, C, n-1);
    }
}

int main() {
    int n = 4;
    printf("A柱上面的盘子个数是: %d\n", n);
    HanoiTower('A', 'B', 'C', n);
    return 0;
}