/*
2. Write a menu driven program to perform the following matrix operations
i) Addition
ii) Subtraction
iii) Multiplication
iv) Transpose
v) Upper Triangular Matrix
vi) Lower Triangular Matrix
vii) Diagonal
*/
#include <stdio.h>
#include<stdlib.h>
void inputMatrix(int rows, int cols, int matrix[rows][cols]) {
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void displayMatrix(int rows, int cols, int matrix[rows][cols]) {
    printf("Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

void addMatrices(int rows, int cols, int mat1[rows][cols], int mat2[rows][cols], int result[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

void subtractMatrices(int rows, int cols, int mat1[rows][cols], int mat2[rows][cols], int result[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
}

void multiplyMatrices(int rows1, int cols1, int cols2, int mat1[rows1][cols1], int mat2[cols1][cols2], int result[rows1][cols2]) {
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

void transposeMatrix(int rows, int cols, int matrix[rows][cols], int result[cols][rows]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[j][i] = matrix[i][j];
        }
    }
}

void upperTriangularMatrix(int rows, int cols, int matrix[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (j < i) {
                matrix[i][j] = 0;
            }
        }
    }
}

void lowerTriangularMatrix(int rows, int cols, int matrix[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (j > i) {
                matrix[i][j] = 0;
            }
        }
    }
}

void diagonalMatrix(int rows, int cols, int matrix[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i != j) {
                matrix[i][j] = 0;
            }
        }
    }
}

int main() {
    int choice;
    int rows, cols;

    printf("Enter the number of rows and columns for the matrices: ");
    scanf("%d %d", &rows, &cols);

    int matrix1[rows][cols], matrix2[rows][cols], result[rows][cols];

    do {
        printf("\nMatrix Operations Menu:\n");
        printf("1. Input Matrices\n");
        printf("2. Display Matrices\n");
        printf("3. Addition\n");
        printf("4. Subtraction\n");
        printf("5. Multiplication\n");
        printf("6. Transpose\n");
        printf("7. Upper Triangular Matrix\n");
        printf("8. Lower Triangular Matrix\n");
        printf("9. Diagonal Matrix\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("For Matrix 1:\n");
                inputMatrix(rows, cols, matrix1);
                printf("For Matrix 2:\n");
                inputMatrix(rows, cols, matrix2);
                break;
            case 2:
                printf("Matrix 1:\n");
                displayMatrix(rows, cols, matrix1);
                printf("Matrix 2:\n");
                displayMatrix(rows, cols, matrix2);
                break;
            case 3:
                addMatrices(rows, cols, matrix1, matrix2, result);
                printf("Sum of matrices:\n");
                displayMatrix(rows, cols, result);
                break;
            case 4:
                subtractMatrices(rows, cols, matrix1, matrix2, result);
                printf("Difference of matrices:\n");
                displayMatrix(rows, cols, result);
                break;
            case 5:
                multiplyMatrices(rows, cols, cols, matrix1, matrix2, result);
                printf("Product of matrices:\n");
                displayMatrix(rows, cols, result);
                break;
            case 6:
                printf("Transpose of Matrix 1:\n");
                transposeMatrix(rows, cols, matrix1, result);
                displayMatrix(cols, rows, result);
                printf("Transpose of Matrix 2:\n");
                transposeMatrix(rows, cols, matrix2, result);
                displayMatrix(cols, rows, result);
                break;
            case 7:
                upperTriangularMatrix(rows, cols, matrix1);
                upperTriangularMatrix(rows, cols, matrix2);
                printf("Upper Triangular Matrix 1:\n");
                displayMatrix(rows, cols, matrix1);
                printf("Upper Triangular Matrix 2:\n");
                displayMatrix(rows, cols, matrix2);
                break;
            case 8:
                lowerTriangularMatrix(rows, cols, matrix1);
                lowerTriangularMatrix(rows, cols, matrix2);
                printf("Lower Triangular Matrix 1:\n");
                displayMatrix(rows, cols, matrix1);
                printf("Lower Triangular Matrix 2:\n");
                displayMatrix(rows, cols, matrix2);
                break;
            case 9:
                diagonalMatrix(rows, cols, matrix1);
                diagonalMatrix(rows, cols, matrix2);
                printf("Diagonal Matrix 1:\n");
                displayMatrix(rows, cols, matrix1);
                printf("Diagonal Matrix 2:\n");
                displayMatrix(rows, cols, matrix2);
                break;
            case 0:
                printf("Exiting the program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
                exit;
        }
       
    } while (choice != 0);
    /*
    there is problem if we don't enter number this loop goes to infinity
    */
    return 0;
}
