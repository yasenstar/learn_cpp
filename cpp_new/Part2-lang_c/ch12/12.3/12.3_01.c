#include <stdio.h>
#include <string.h>

struct stu {
    char name[30];
    int age;
    double score;
};

int main() {
    struct stu student[2];

    strcpy(student[0].name, "张三 abc");
    student[0].age = 21;
    student[0].score = 92.1f;

    strcpy(student[1].name, "李四 def");
    student[1].age = 22;
    student[1].score = 89.4f;

    FILE *fp;
    fp = fopen("structfile.bin", "wb");

    if (fp == NULL) {
        printf("文件打开失败~\n");
    }
    else {
        int structlen = sizeof(struct stu);
        printf("%d\n", structlen);
        int retresult = fwrite(
            &student,
            structlen,
            2,
            fp
        );
        fclose(fp);
    }
}