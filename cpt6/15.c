#include <stdio.h>

void copyString(char *s1, const char *s2) {
    while ((*s1++ = *s2++) != '\0') {
        // Copy each character from s2 to s1, including the null terminator
    }
}

int main() {
    char s1[100]; 
    char s2[] = "Hello, World!";

    copyString(s1, s2);

    printf("s1: %s\n", s1);

    return 0;
}