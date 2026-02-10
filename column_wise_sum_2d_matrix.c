// Q. Find the Sum of Each Column in a 2D Matrix

#include <stdio.h>

int main() {
    int arr[100][100], r, c;

    printf("Enter the number of rows: ");
    scanf("%d", &r);

    printf("Enter the number of columns: ");
    scanf("%d", &c);

    // Input matrix (row-wise)
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("Enter element: ");
            scanf("%d", &arr[i][j]);
        }
    }

    // Column-wise sum
    for (int j = 0; j < c; j++) {
        int sum = 0;
        for (int i = 0; i < r; i++) {
            sum += arr[i][j];
        }
        printf("%d\n", sum);
    }

    return 0;
}
