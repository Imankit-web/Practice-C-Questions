//Q. Find the number of elements greater than a given value X

#include <stdio.h>


int main(){
    int arr[100],n,x;

    printf("Enter the length of the array: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Enter the value of 'X' :");
    scanf("%d",&x);

    int count=0;

    for(int i=0; i<n; i++){
        if(arr[i]> x){
            count++;
        }
    }

    printf("%d",count);
    

    return 0;


}