#include <stdio.h>
#include <string.h>

int main() {
    int reco; // reco: reconcile
    char str1[10] = "one1234";
    char str2[10] = "ONE1234";
    reco = strcmp(str1, str2);
    printf("reco = %d", reco);
    return 0;
}