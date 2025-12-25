#include <stdio.h>

int main() {
    FILE *fp;
    fp = fopen("FTest.txt", "w");

    if (fp == NULL) {
        printf("文件打开失败!\n");
    }
    else {
        char reco = fputc('a', fp);
        if (reco == EOF) {
            printf("Write failed~\n");
        }
        else {
            reco = fputc('d', fp);
            reco = fputc('\n', fp);
            reco = fputc('e', fp);
        }
        fclose(fp);
    }
    FILE *fp1;
    fp1 = fopen("FTest.txt", "r");
    // printf("%c\n", fgetc(fp1))
    char reco = fgetc(fp1);
    while (reco != EOF) { // also can use "while (!feof(fp))"
        putchar(reco);
        reco = fgetc(fp1);
    }
    fclose(fp1);
    return 0;
}