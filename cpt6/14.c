#include <stdio.h>
#include <string.h>

int compare_strings(const char *s1, const char *s2) {
    while (*s1 && (*s1 == *s2)) {
        s1++;
        s2++;
    }
    return *(unsigned char *)s1 - *(unsigned char *)s2;
}

int main() {
    char s1[100], s2[100];
    
    printf("Enter first string: ");
    fgets(s1, sizeof(s1), stdin);

    printf("Enter second string: ");
    fgets(s2, sizeof(s2), stdin);

    // 移除 fgets 读取的换行符
    s1[strcspn(s1, "\n")] = 0;
    s2[strcspn(s2, "\n")] = 0;

    int result = compare_strings(s1, s2);
    if (result == 0) {
        printf("The strings are equal.\n");
    } else {
        printf("%d\n", result);
    }

    return 0;
}