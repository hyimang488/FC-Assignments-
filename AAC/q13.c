#include <stdio.h>

#define SIZE 2

int main() {
    int A[SIZE][SIZE];
    int B[SIZE][SIZE];
    int sum[SIZE][SIZE];

    printf("Enter Matrix A:\n");

    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            scanf("%d", &A[i][j]);

    printf("Enter Matrix B:\n");

    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            scanf("%d", &B[i][j]);

    printf("Addition:\n");

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            sum[i][j] = A[i][j] + B[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    printf("Transpose of Matrix A:\n");

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++)
            printf("%d ", A[j][i]);

        printf("\n");
    }

    return 0;
}