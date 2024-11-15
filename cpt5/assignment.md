# Assignment Chapter 5
张理凯 202300101051

4. 
```#include <stdio.h>
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
```

```
请输入一行字符: 1s2bc!333+=`
英文字母: 3
空格: 1
数字: 5
```

5. 
```
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
```

```
请输入n：55
公式是：a + aa + aaa + aaaa + aaaaa + aaaaaa + aaaaaaa + aaaaaaaa + aaaaaaaaa + aaaaaaaaaa + aaaaaaaaaaa + aaaaaaaaaaaa + aaaaaaaaaaaaa + aaaaaaaaaaaaaa + aaaaaaaaaaaaaaa + aaaaaaaaaaaaaaaa + aaaaaaaaaaaaaaaaa + aaaaaaaaaaaaaaaaaa + aaaaaaaaaaaaaaaaaaa + aaaaaaaaaaaaaaaaaaaa + aaaaaaaaaaaaaaaaaaaaa + aaaaaaaaaaaaaaaaaaaaaa + aaaaaaaaaaaaaaaaaaaaaaa + aaaaaaaaaaaaaaaaaaaaaaaa + aaaaaaaaaaaaaaaaaaaaaaaaa + aaaaaaaaaaaaaaaaaaaaaaaaaa + aaaaaaaaaaaaaaaaaaaaaaaaaaa + aaaaaaaaaaaaaaaaaaaaaaaaaaaa + aaaaaaaaaaaaaaaaaaaaaaaaaaaaa + aaaaaaaaaaaaaaaaaaaaaaaaaaaaaa + aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa + aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa + aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa + aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa + aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa + aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa + aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa + aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa + aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa + aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa + aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa + aaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaa
结果是：1633771873a
```


6. 
```

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
```

```
结果是：268040729
```

9. 
```
#include<stdio.h>

int sum_of_factors(int n){
    int sum = 0;
    for (int i = 1; i < n; i++){
        if (n % i == 0){
            sum += i;
        }
    }
    return sum;
}

void print_factors(int n) {
    int first = 1;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            if (!first) {
                printf(",");
            }
            printf("%d", i);
            first = 0;
        }
    }
}

int main(){
    for (int i = 1; i <= 1000; i++){
        if (i == sum_of_factors(i)){
            printf("%d its factors are ", i);
            print_factors(i);
            printf("\n");
        }
    }
}  
```

```
6 its factors are 1,2,3
28 its factors are 1,2,4,7,14
496 its factors are 1,2,4,8,16,31,62,124,248
```

10. 

```
#include<stdio.h>

int fibonacci(int f){
    if (f <= 0) return 0;
    if (f == 1) return 1;
    return fibonacci(f - 1) + fibonacci(f - 2);
}

int main(){
    float sum = 0, temSum = 0;
    for (int i = 1; i <= 20; i++){
        temSum = fibonacci(i + 2) / fibonacci(i + 1);
        sum += temSum;
    }
    printf("结果是：%f\n", sum);

}
```

```
结果是：21.000000
```

11. 
```
#include<stdio.h>

int main(){
    double h = 100;
    double sum = 0;

    for (int i = 1; i <= 10; i++){
        sum = sum + h + h / 2;
        h = h / 2;
    }
    printf("第十次落地时共经过%f米\n", sum);
    printf("第十次反弹%f米\n", h);
}
```

```
第十次落地时共经过299.707031米
第十次反弹0.097656米
```