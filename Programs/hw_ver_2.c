#include <stdio.h>

#define N 3  // size of matrix

void rotate_matrix(int matrix[N][N], int n) {
    n %= 4; // reduce n to range [0, 3] for optimization
    for (int k = 0; k < n; k++) {
        for (int i = 0; i < N/2; i++) {
            for (int j = i; j < N-i-1; j++) {
                int temp = matrix[i][j];
                matrix[i][j] = matrix[N-j-1][i];
                matrix[N-j-1][i] = matrix[N-i-1][N-j-1];
                matrix[N-i-1][N-j-1] = matrix[j][N-i-1];
                matrix[j][N-i-1] = temp;
            }
        }
    }
}

void print_matrix(int matrix[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[N][N] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int n; // rotate matrix 2 times
    printf("Enter the no. of times you want to rotate the matrix : ");
    scanf("%d",&n);
    printf("Original matrix:\n");
    print_matrix(matrix);

    rotate_matrix(matrix, n);
    printf("Rotated matrix %d time(s):\n", n);
    print_matrix(matrix);

    return 0;
}
