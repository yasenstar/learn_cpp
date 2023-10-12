#include <stdio.h>

int main() {

    char str [80];
    int i, j;

    printf("Please enter your first name: ");
    scanf("%79s", str);
    printf("You have entered the name as: %s\n", str);

    printf("Enter your age: ");
    scanf("%d", &i);
    printf("Your age is %d\n", i);

    printf("Enter one hexadecimal number: ");
    scanf("%x", &j);
    printf("You have entered %x (%d).\n", j, j);

}