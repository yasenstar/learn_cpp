#include <stdio.h>

typedef int INTEGER;

typedef struct date {
    int month;
    int day;
    int year;
} DATE;

int main() {
    INTEGER a, b, c;
    printf("size of a = %d\n", sizeof(a));
    DATE birthday;
    birthday.month = 10;
    printf("brith month size = %d\n", sizeof(birthday));
    return 0;
}