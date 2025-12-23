#include <stdio.h>

int main() {
    const char *pName[] = {"C++", "Java", "Python", "Go", "C#"};
    printf("pName has %d bytes.\n", sizeof(pName));
    // pName has 40 bytes.
    int isize = sizeof(pName)/sizeof(pName[0]);
    printf("pName has %d elements.\n", isize);
    // pName has 5 elements.
    const char *p2 = "JAVA";
    printf("p2 = %s\n", p2);
    // p2 = JAVA

    for (int i = 0; i < isize; i++) {
        printf("pName[%d] = %s\n", i, pName[i]);
    }

    const char *ptemp;
    ptemp = pName[0]; pName[0] = pName[1]; pName[1] = ptemp;

    for (int i = 0; i < isize; i++) {
        printf("pName[%d] = %s\n", i, pName[i]);
    }
        
    return 0;
}