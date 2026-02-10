// Q. Print a 2D Matrix Row-wise

#include <stdio.h>

int main() {
    int arr[100][100], r, c;

    printf("Enter the number of rows: ");
    scanf("%d", &r);

    printf("Enter the number of columns: ");
    scanf("%d", &c);

    // Input matrix
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("Enter element: ");
            scanf("%d", &arr[i][j]);
        }
    }

    // Print matrix row-wise
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
