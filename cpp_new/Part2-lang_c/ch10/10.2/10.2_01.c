#include <stdio.h>

struct date {
    int month;
    int day;
    int year;
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
    // struct student stuArr[3]= {
    //     {1001,"stu1",1,18,"1-1",12,30,2000},
    //     {1002,"stu2",1,20,"1-2",11,15,1998},
    //     {1003,"stu3",0,22,"2-1",10,15,2002},
    // };

    struct student stuArr[3];

    stuArr[0].age = 25;
    stuArr[2].birthday.month = 8;

    printf("first student's age: %d\n", stuArr[0].age);
    printf("3rd student's birth month: %d\n", stuArr[2].birthday.month);

    return 0;
}