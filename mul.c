#include <stdio.h>

#define MAX_SIZE 10

void multiply_matrices(int matrix1[][MAX_SIZE], int matrix2[][MAX_SIZE], int rows1, int cols1, int rows2, int cols2, int result[][MAX_SIZE]) {
    if (cols1 != rows2) {
        printf("Cannot multiply the matrices. Invalid dimensions.\n");
        return;
    }

    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

void print_matrix(int matrix[][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix1[MAX_SIZE][MAX_SIZE];
    int matrix2[MAX_SIZE][MAX_SIZE];
    int result[MAX_SIZE][MAX_SIZE];
    int rows1, cols1, rows2, cols2;

    printf("Enter the number of rows and columns of matrix 1: ");
    scanf("%d %d", &rows1, &cols1);

    printf("Enter the elements of matrix 1:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter the number of rows and columns of matrix 2: ");
    scanf("%d %d", &rows2, &cols2);

    printf("Enter the elements of matrix 2:\n");
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    multiply_matrices(matrix1, matrix2, rows1, cols1, rows2, cols2, result);

    printf("Resultant matrix:\n");
    print_matrix(result, rows1, cols2);

    return 0;
}















3