// Q. Input and Print a 3D Array

#include <stdio.h>

int main() {
    int arr[100][100][100];
    int l, r, c;

    printf("Enter number of layers: ");
    scanf("%d", &l);

    printf("Enter number of rows: ");
    scanf("%d", &r);

    printf("Enter number of columns: ");
    scanf("%d", &c);

    // Input 3D array
    for (int layer = 0; layer < l; layer++) {
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                printf("Enter element: ");
                scanf("%d", &arr[layer][i][j]);
            }
        }
    }

    // Print 3D array
    for (int layer = 0; layer < l; layer++) {
        printf("Layer %d:\n", layer);
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                printf("%d ", arr[layer][i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
