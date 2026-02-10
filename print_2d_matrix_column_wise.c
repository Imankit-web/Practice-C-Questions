// Q. Print a 2D Matrix Column-wise

#include <stdio.h>

int main() {
    int arr[100][100], r, c;

    printf("Enter the number of rows: ");
    scanf("%d", &r);

    printf("Enter the number of columns: ");
    scanf("%d", &c);

    // Input matrix (ALWAYS row-wise)
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("Enter element: ");
            scanf("%d", &arr[i][j]);
        }
    }

    // Print matrix column-wise
    for (int j = 0; j < c; j++) {
        for (int i = 0; i < r; i++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
