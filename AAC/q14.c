#include <stdio.h>

#define SIZE 2

int main() {
    int A[SIZE][SIZE];
    int B[SIZE][SIZE];
    int C[SIZE][SIZE] = {0};

    printf("Enter Matrix A:\n");

    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            scanf("%d", &A[i][j]);

    printf("Enter Matrix B:\n");

    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            scanf("%d", &B[i][j]);

    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            for (int k = 0; k < SIZE; k++)
                C[i][j] += A[i][k] * B[k][j];

    printf("Result:\n");

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++)
            printf("%d ", C[i][j]);

        printf("\n");
    }

    return 0;
}