#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp = fopen("conf.txt", "r");
    if (!fp) {
        printf("文件打开失败！\n");
    }
    else {
        char LineBuf[1024];
        while (!feof(fp)) {
            LineBuf[0] = 0;
            if (fgets(LineBuf, sizeof(LineBuf)-1, fp) == NULL) {
                continue;
            }
            if (LineBuf[0] == '\0') {
                continue;
            }
        lblprocstring:
            if (strlen(LineBuf) > 0) {
                if (LineBuf[strlen(LineBuf)-1] == 10 || LineBuf[strlen(LineBuf)-1] == 13) {
                    LineBuf[strlen(LineBuf)-1] = 0;
                    goto lblprocstring;
                }
            }
            if (strlen(LineBuf) <= 0) {
                continue;
            }
            printf("%s\n", LineBuf);
        }
        fclose(fp);
    }
}