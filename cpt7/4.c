// 写一个函数，使给定的一个3*3的二维整型数组转置，即行列互换。

#include <stdio.h>

void transpose(int matrix[3][3]) {
    int temp;
    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 3; j++) {
            temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
}

void printMatrix(int matrix[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
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

    printf("原始矩阵:\n");
    printMatrix(matrix);

    transpose(matrix);

    printf("转置后的矩阵:\n");
    printMatrix(matrix);

    return 0;
}