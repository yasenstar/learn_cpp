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

void func1(struct student *pd) {
    (++pd)->age = 118;
}

void func2(struct student d) {
    d.age = 208;
}

int main() {
    struct student stuArr[3]= {
        {1001,"stu1",1,18,"1-1",12,30,2000},
        {1002,"stu2",1,20,"1-2",11,15,1998},
        {1003,"stu3",0,22,"2-1",10,15,2002},
    };
    struct student *ps;
    ps = stuArr;
    printf("stuArr[0].age = %d\n", stuArr[0].age);
    func1(ps);
    printf("stuArr[0].age = %d\n", stuArr[0].age);
    printf("stuArr[1].age = %d\n", stuArr[1].age);
    func2(stuArr[0]);
    printf("stuArr[0].age = %d\n", stuArr[0].age);
    return 0;
}