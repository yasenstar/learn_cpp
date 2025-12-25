#include <stdio.h>

struct stu {
    char name[30];
    int age;
    double score;
};

int main() {
    FILE *fp = fopen("structfile.bin", "rb");
    if (!fp) {
        printf("文件打开失败！\n");
    }
    else {
        int t = sizeof(struct stu);
        struct stu studentnew[2];
        int retresult = fread(
            &studentnew,
            sizeof(struct stu),
            2,
            fp
        );
        fclose(fp);
    }
}