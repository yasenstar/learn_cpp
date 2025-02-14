#include <stdio.h>

int main() {
    int i,j;
    char diamond[5][5] = {
        {' ', ' ', '*', ' ', ' '},
        {' ', '*', ' ', '*', ' '},
        {'*', ' ', ' ', ' ', '*'},
        {' ', '*', ' ', '*', ' '},
        {' ', ' ', '*', ' ', ' '},
    };
    for (i=0;i<5;i++) {
        for (j=0;j<5;j++) {
            printf("%c", diamond[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}