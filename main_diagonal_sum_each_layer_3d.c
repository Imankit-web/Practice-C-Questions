// Q. Find the Sum of All Elements on the Main Diagonal of Each Layer

#include <stdio.h>

int main() {
    int arr[10][10][10];
    int l, n;

    printf("Enter number of layers: ");
    scanf("%d", &l);

    printf("Enter size of square matrix (n): ");
    scanf("%d", &n);

    // Input 3D array
    for (int layer = 0; layer < l; layer++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                scanf("%d", &arr[layer][i][j]);
            }
        }
    }

    // Main diagonal sum for each layer
    for (int layer = 0; layer < l; layer++) {
        int sum = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i == j) {
                    sum += arr[layer][i][j];
                }
            }
        }

        printf("%d\n", sum);
    }

    return 0;
}