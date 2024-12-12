// 写一个函数，使输入的一个字符串按反序存放，在主函数中输入输出反序前后的字符串。

#include <stdio.h>
#include <string.h>

void reverseString(char str[]) {
    int n = strlen(str);
    for (int i = 0; i < n / 2; i++) {
        char temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }
}

int main() {
    char str[100];

    printf("请输入一个字符串: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    printf("反序前的字符串: %s\n", str);

    reverseString(str);

    printf("反序后的字符串: %s\n", str);

    return 0;
}