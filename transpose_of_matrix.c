//Q. Find the Transpose of a Matrix



#include <stdio.h>

int main() {
    int arr[100][100], r,c;

    printf("Enter the value of r: ");
    scanf("%d", &r);
    
    printf("Enter the value of c:");
    scanf("%d",&c);

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("Enter the elements:");
            scanf("%d", &arr[i][j]);
        }
    }
    
    int tarr[100][100];


    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            tarr[i][j] = arr[j][i];
            printf("%d ",tarr[i][j]);
        }
        printf("\n");
    }

   

    return 0;
}

