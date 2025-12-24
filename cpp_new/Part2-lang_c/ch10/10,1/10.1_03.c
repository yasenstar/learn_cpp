#include <stdio.h>

struct date {
    int year;
    int month;
    int day;
};

struct student {
    int num;
    char name[100];
    int sex;
    int age;
    char address[100];
    struct date birthday;
};

int main() {

    struct student s1, s2;

    s1.num = 1001;
    printf("s1.num = %d\n", s1.num);

    s1.birthday.month = 12;
    s1.birthday.day = 20;
    s1.birthday.year = 2018;
    printf("s1's birthday is %d-%d-%d\n", s1.birthday.year, s1.birthday.month, s1.birthday.day);

    s1.age = 7;
    s2.age = s1.age;

    int agesum = s1.age + s2.age;

    s1.age++;

    printf("agesum = %d, s1.age = %d\n", agesum, s1.age);

    int *p = &s1.num;
    printf("s1.num by pointer is %d\n", *p);

    struct student s5 = {
        100,
        "王五",
        1,
        16,
        "3-15",
        2018,
        10,
        14
    };

    printf("s5.address = %s\n", s5.address);

    return 0;
}