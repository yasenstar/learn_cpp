#include <stdio.h>
#include <stdlib.h>

int main() {
    int abc = 2;
    switch (abc) {
        case 1: {
            printf("value is 1\n");
            break;
        }
        case 2: {
            printf("value is 2\n");
            break;
        }
        case 3: {
            printf("value is 3\n");
            break;
        }
        case 4: {
            printf("value is 4\n");
            break;
        }
        default: {
            printf("nothing matched.\n");
            break;
        }
    }
    
    system("pause");
    return 0;
}