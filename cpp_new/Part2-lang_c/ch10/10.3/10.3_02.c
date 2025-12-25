#include <stdio.h>

enum color {
    Red,
    Green,
    Blue,
    Yellow
};

int main() {
    enum color mycolor1, mycolor2;
    printf("sizeof(mycolor1) = %d\n", sizeof(mycolor1));
    mycolor1 = Red;
    mycolor2 = Yellow;
    printf("sizeof(mycolor1) = %d\n", sizeof(mycolor1));
    printf("sizeof(mycolor2) = %d\n", sizeof(mycolor2));
    printf("Red = %d\n", Red);
    printf("MyColor2 = %d\n", mycolor2);
    return 0;
}