# Assignment Chapter 8
张理凯 202300101051

6.  

```c
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
```

```
请输入一个字符串：apple1678
字符串的长度是：9
```

8.  

```c
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
```

```
请输入一行文字：a abbb c1234 #$%
大写字母：0
小写字母：6
空格：4
数字：4
其他字符：3
```


9.  
```c
#include <stdio.h>

void transposeMatrix(int (*matrix)[3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 3; j++) {
            int temp = *(*(matrix + i) + j);         
            *(*(matrix + i) + j) = *(*(matrix + j) + i);
            *(*(matrix + j) + i) = temp;             
        }
    }
}

void printMatrix(int (*matrix)[3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", *(*(matrix + i) + j)); 
        }
        printf("\n");
    }
}

int main() {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("原矩阵：\n");
    printMatrix(matrix);

    transposeMatrix(matrix);

    printf("转置后的矩阵：\n");
    printMatrix(matrix);

    return 0;
}
```

```
原矩阵：
1 2 3 
4 5 6 
7 8 9 
转置后的矩阵：
1 4 7 
2 5 8 
3 6 9 
```
