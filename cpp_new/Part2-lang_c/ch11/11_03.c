#include <stdio.h>

#define BIT(x) (1 << (x))

enum EnumTask {
    ETask1 = BIT(0),
    ETask2 = BIT(1),
    ETask3 = BIT(2),
    ETask4 = BIT(3),
    ETask5 = BIT(4),
    ETask6 = BIT(5),
    ETask7 = BIT(6),
    ETask8 = BIT(7),
    ETask9 = BIT(8),
    ETask10 = BIT(9),
};

void printBinary(int num) {
    for (int i = sizeof(int) * 8 - 1; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
    printf("\n");
}

int main() {
    // int i;
    // for (i = 0; i < 10; i++) {
    //     printf("BIT(%d) = %d,\tIn Binary = ", i, BIT(i));
    //     printBinary(BIT(i));
    //     printf("\n");
    // }
    unsigned int task = 0;

    if (task & ETask7) {
        printf("Task 7 has been done!\n");
    }
    else {
        printf("task 7 has not yet been done!\n");
        task = task | ETask7;
    }

    if (task & ETask7) {
        printf("Now, task 7 already done!\n");
    }
    
    return 0;
}