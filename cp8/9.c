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