#include <stdio.h>

int stringLength(const char *str) {
    const char *ptr = str; 
    while (*ptr != '\0') {
        ptr++; 
    }
    return ptr - str; 
}

int main() {
    char input[100]; 

    printf("请输入一个字符串：");
    scanf("%99s", input); 

    int length = stringLength(input); 
    printf("字符串的长度是：%d\n", length);

    return 0;
}