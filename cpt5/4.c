#include <stdio.h>
#include <ctype.h>

void count_characters(const char *str, int *letters, int *spaces, int *digits, int *others) {
    *letters = *spaces = *digits = *others = 0;
    while (*str) {
        if (isalpha(*str)) {
            (*letters)++;
        } else if (isspace(*str)) {
            (*spaces)++;
        } else if (isdigit(*str)) {
            (*digits)++;
        } else {
            (*others)++;
        }
        str++;
    }
}

int main() {
    char str[100];
    int letters, spaces, digits, others;

    printf("请输入一行字符: ");
    fgets(str, sizeof(str), stdin);

    count_characters(str, &letters, &spaces, &digits, &others);

    printf("英文字母: %d\n", letters);
    printf("空格: %d\n", spaces);
    printf("数字: %d\n", digits);
    printf("其它字符: %d\n", others);

    return 0;
}