// Q. Count Even and Odd Numbers in Each Layer

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

    // Input 3D array
    for (int layer = 0; layer < l; layer++) {
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                scanf("%d", &arr[layer][i][j]);
            }
        }
    }

    // Count even and odd in each layer
    for (int layer = 0; layer < l; layer++) {
        int even_count = 0;
        int odd_count = 0;

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (arr[layer][i][j] % 2 == 0) {
                    even_count++;
                } else {
                    odd_count++;
                }
            }
        }

        printf("Layer %d: Even = %d, Odd = %d\n", layer, even_count, odd_count);
    }

    return 0;
}