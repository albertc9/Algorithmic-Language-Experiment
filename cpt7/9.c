// 编写一个函数，由实参传来一个字符串，统计此字符串中字母、数字、空格和其他字符的个数，并在主函数中输入字符串以及输出上述的结果。

#include <stdio.h>
#include <ctype.h>
#include <string.h>

void countCharacters(const char str[], int *letters, int *digits, int *spaces, int *others) {
    *letters = *digits = *spaces = *others = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            (*letters)++;
        } else if (isdigit(str[i])) {
            (*digits)++;
        } else if (isspace(str[i])) {
            (*spaces)++;
        } else {
            (*others)++;
        }
    }
}

int main() {
    char str[100];
    int letters, digits, spaces, others;

    printf("请输入一个字符串: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    countCharacters(str, &letters, &digits, &spaces, &others);

    printf("字母个数: %d\n", letters);
    printf("数字个数: %d\n", digits);
    printf("空格个数: %d\n", spaces);
    printf("其他字符个数: %d\n", others);

    return 0;
}