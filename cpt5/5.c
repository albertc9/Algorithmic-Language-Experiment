#include <stdio.h>
#include <string.h>

int main() {
    int n;
    printf("请输入n：");
    scanf("%d", &n);

    char formula[1000] = "";
    char term[100] = "a";
    int sum = 0;
    int current_term_value = 0;

    for (int i = 0; i < n; i++) {
        current_term_value = current_term_value * 10 + 1; // 生成当前项的数值，例如：1, 11, 111, ...
        sum += current_term_value;

        if (i == 0) {
            sprintf(formula, "%s", term);
        } else {
            sprintf(formula, "%s + %s", formula, term);
        }
        strcat(term, "a");
    }

    printf("公式是：%s\n", formula);
    printf("结果是：%da\n", sum);
    return 0;
}