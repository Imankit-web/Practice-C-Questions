// Q. Find the Maximum Element in the Entire 3D Array

#include <stdio.h>

int main() {
    int arr[10][10][10];
    int l, r, c;

    printf("Enter number of layers: ");
    scanf("%d", &l);

    printf("Enter number of rows: ");
    scanf("%d", &r);

    printf("Enter number of columns: ");
    scanf("%d", &c);

    // Input
    for (int layer = 0; layer < l; layer++) {
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                scanf("%d", &arr[layer][i][j]);
            }
        }
    }

    int real_max = arr[0][0][0];

    // Find maximum
    for (int layer = 0; layer < l; layer++) {
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (arr[layer][i][j] > real_max) {
                    real_max = arr[layer][i][j];
                }
            }
        }
    }

    printf("The Maximum element -> %d\n", real_max);

    return 0;
}