#include <stdio.h>
#include <ctype.h>

void countCharacters(const char *str, int *uppercase, int *lowercase, int *spaces, int *digits, int *others) {
    while (*str != '\0') {
        if (isupper(*str)) {
            (*uppercase)++;
        } else if (islower(*str)) {
            (*lowercase)++;
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
    char input[200]; 
    int uppercase = 0, lowercase = 0, spaces = 0, digits = 0, others = 0;

    printf("请输入一行文字：");
    fgets(input, sizeof(input), stdin);

    countCharacters(input, &uppercase, &lowercase, &spaces, &digits, &others);

    printf("大写字母：%d\n", uppercase);
    printf("小写字母：%d\n", lowercase);
    printf("空格：%d\n", spaces);
    printf("数字：%d\n", digits);
    printf("其他字符：%d\n", others);

    return 0;
}