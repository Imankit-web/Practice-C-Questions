//Q. Find the total number of subarrays in an array.

#include <stdio.h>

int main(){
    int arr[100],n;

    printf("Enter the no of element of the array:");
    scanf("%d",&n);

    for(int i=0; i<n ; i++){
        printf("Enter the element no %d:", i+1);
        scanf("%d",&arr[i]);
    }

    int count =0;

    for(int i =0; i<n; i++){
        for(int j=i; j<n; j++){
            count++;
        }
    }


    printf("%d",count);

    return 0;
}