#include <stdio.h>
#include <string.h>

int main() {
    const char *pmystr1 = "I love China!";
    const char *pmystr2 = "I love China!";
    printf("%s, length = %d, addr = %d\n", pmystr1, strlen(pmystr1), &pmystr1);
    printf("%s, length = %d, addr = %d\n", pmystr2, strlen(pmystr2), &pmystr2);
    return 0;
}