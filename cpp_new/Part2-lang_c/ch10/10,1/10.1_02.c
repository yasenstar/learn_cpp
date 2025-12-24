int main() {
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

    struct student s1, s2;
}