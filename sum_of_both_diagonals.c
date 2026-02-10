//Q. Find the Sum of Both Diagonals of a Square Matrix

#include <stdio.h>

int main() {
    int arr[100][100], n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int sum = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j || i + j == n - 1) {
                sum += arr[i][j];
            }
        }
    }

    printf("%d", sum);

    return 0;
}
