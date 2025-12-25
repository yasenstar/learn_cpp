#include <stdio.h>
#include <string.h>

union myuni {
    int carnum;
    char cartype;
    char cname[60];
};

int main() {
    union myuni a, b, c;
    a.cartype = 'b';
    strcpy(a.cname, "Volvo");
    a.carnum = 23456;
    printf("carnum = %d, cartype = %c, carname = %s\n", a.carnum, a.cartype, a.cname);
}