#include <stdio.h>
#include <string.h>

int main() {
    char mystr[] = "I love China!";
    printf("%s %d, address = %d\n", mystr, strlen(mystr), &mystr);

    char mystr1[] = "I love China!";
    char mystr2[] = "I love China!";
    printf("%s, address = %d\n", mystr1, &mystr1);
    printf("%s, address = %d\n", mystr2, &mystr2);

    return 0;
}