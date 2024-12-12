// 用递归法将一个整数n转换成字符串。例如，输入483,应输出字符串"483"。n的位数不确定，可以是任意位数的整数。

#include <stdio.h>
#include <string.h>

void intToStr(int n, char str[], int *index) {
    if (n == 0) {
        return;
    }

    int digit = n % 10;
    intToStr(n / 10, str, index);
    str[(*index)++] = digit + '0';
    str[*index] = '\0';
}

int main() {
    int n;
    char str[100];
    int index = 0;

    printf("请输入一个整数: ");
    scanf("%d", &n);

    if (n < 0) {
        str[index++] = '-';
        n = -n;
    }


    if (n == 0) {
        str[index++] = '0';
        str[index] = '\0';
    } else {
        intToStr(n, str, &index);
    }

    printf("转换后的字符串: %s\n", str);

    return 0;
}