//Q.Find the Sum of Each Column Across All Layers of a 3D Array


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
                printf("Enter element: ");
                scanf("%d", &arr[layer][i][j]);
            }
        }
    }

    
    for (int j = 0; j < c; j++) {
        int sum = 0;
        for (int layer = 0; layer < l; layer++) {
            for (int i = 0; i < r; i++) {
                sum += arr[layer][i][j];
            }
        }
        printf("%d\n", sum);
    }

    return 0;
}
