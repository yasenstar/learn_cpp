#include <stdio.h>
#include <string.h>

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
    struct student stu;
    stu.num = 1001;
    printf("stu.num = %d\n", stu.num);

    struct student *ps;
    ps = &stu;
    stu.age = 23;
    strcpy(stu.name, "小虎");
    printf("student name is %s\n", (*ps).name);
    printf("student num is %d\n", (*ps).num);

    printf("student name is %s\n", ps->name);
    printf("student num is %d\n", ps->num);

    return 0;
}