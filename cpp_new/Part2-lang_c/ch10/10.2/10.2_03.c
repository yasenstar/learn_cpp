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
    struct student stuArr[3]= {
        {1001,"stu1",1,18,"1-1",12,30,2000},
        {1002,"stu2",1,20,"1-2",11,15,1998},
        {1003,"stu3",0,22,"2-1",10,15,2002},
    };
    struct student *ps;
    ps = stuArr;
    for (int i = 0; i < 3; i++) {
        printf("num = %d\t", ps -> num);
        printf("name = %s\t", ps -> name);
        printf("age = %d\n", ps -> age);
    }
    int ilen = sizeof(struct student);
    printf("ilen = %d\n", ilen);
    return 0;
}