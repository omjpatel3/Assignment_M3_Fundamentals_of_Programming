#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix1[rows][cols], matrix2[rows][cols];
    int resultAdd[rows][cols], resultSub[rows][cols], resultMul[rows][cols];

    printf("Enter elements of first matrix:\n");
    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            printf("Enter [%d][%d]: ", row, col);
            scanf("%d", &matrix1[row][col]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            printf("Enter [%d][%d]: ", row, col);
            scanf("%d", &matrix2[row][col]);
        }
    }

    printf("Matrix after addition:\n");
    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            resultAdd[row][col] = matrix1[row][col] + matrix2[row][col];
            printf("%d ", resultAdd[row][col]);
        }
        printf("\n");
    }

    printf("Matrix after subtraction:\n");
    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            resultSub[row][col] = matrix1[row][col] - matrix2[row][col];
            printf("%d ", resultSub[row][col]);
        }
        printf("\n");
    }

    printf("Matrix after multiplication:\n");
    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            resultMul[row][col] = 0;
        }
    }

    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            for (int k = 0; k < cols; k++) {
                resultMul[row][col] += matrix1[row][k] * matrix2[k][col];
            }
        }
    }

    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            printf("%d ", resultMul[row][col]);
        }
        printf("\n");
    }

    return 0;
}
