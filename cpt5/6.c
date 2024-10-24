#include<stdio.h>
// add n! from 1! to 20!

int main(){
    int current_term_value = 1;
    int sum = 0;

    for (int i = 1; i <= 20; i++) {
        current_term_value *= i; // 生成当前项的数值，例如：1, 2, 6, ...
        sum += current_term_value;
    }

    printf("结果是：%d\n", sum);
    return 0;
}