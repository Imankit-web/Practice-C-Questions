// Q. Multiply Two Matrices

#include <stdio.h>

int main() {
    int a[100][100], b[100][100], c[100][100];
    int r1, c1, r2, c2;

    printf("Enter the value of r1: ");
    scanf("%d", &r1);

    printf("Enter the value of c1: ");
    scanf("%d", &c1);

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the value of r2: ");
    scanf("%d", &r2);

    printf("Enter the value of c2: ");
    scanf("%d", &c2);

    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    if (c1 != r2) {
        printf("Matrix multiplication not possible");
        return 0;
    }

    // Matrix multiplication
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            int sum = 0;
            for (int k = 0; k < c1; k++) {
                sum += a[i][k] * b[k][j];
            }
            c[i][j] = sum;
        }
    }

    printf("Output matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
