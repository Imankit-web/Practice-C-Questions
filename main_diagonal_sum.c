//Q. Find the Sum of the Main Diagonal of a Square Matrix

#include <stdio.h>


int main(){
    int arr[100][100],n;

    printf("Enter the value of n:");
    scanf("%d",&n);

    for(int i =0; i< n ; i++){
        for(int j =0 ; j < n ; j++){
            printf("Enter the elements:");
            scanf("%d",&arr[i][j]);
        }
    }

    int sum=0;

    for(int i =0; i<n; i++){
        for(int j =0 ; j<n ; j++){
            if(i == j){
                sum+= arr[i][j];
            }
        }
    }
    printf("%d",sum);

    return 0;

}