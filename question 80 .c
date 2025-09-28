// Multiply two matrices.
#include <stdio.h>

int main() {
    int r1, c1, r2, c2;

    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

    if(c1 != r2) {
        printf("Matrix multiplication not possible. Columns of first must equal rows of second.\n");
        return 0;
    }

    int matrix1[r1][c1], matrix2[r2][c2], product[r1][c2];

    printf("Enter elements of first matrix:\n");
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for(int i = 0; i < r2; i++) {
        for(int j = 0; j < c2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c2; j++) {
            product[i][j] = 0;
        }
    }

    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c2; j++) {
            for(int k = 0; k < c1; k++) {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    printf("Product of the matrices:\n");
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c2; j++) {
            printf("%d\t", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}
