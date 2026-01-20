//Q. Find the first and last occurrence of a given element in an array.

#include <stdio.h>

int main(){
    int n, arr[100],x;

    printf("Enter the no of element of the array:");
    scanf("%d",&n);

    for(int i=0; i<n ; i++){
        printf("Enter the element no %d:", i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the element you want to check:");
    scanf("%d",&x);

    int first_occure=-1;
    int last_occure=-1;

    for(int i=0; i<n ;i++){
        if(arr[i]==x){
            first_occure=i;
            break;
        }
    }
    for(int i=n-1 ; i>=0 ; i--){
        if(arr[i]==x){
            last_occure=i;
            break;
        }
    }
    
    if(first_occure == -1){
        printf("Element not found\n");
    } else {
        printf("First occurrence at index = %d\n", first_occure);
        printf("Last occurrence at index = %d\n", last_occure);
    }

    return 0;

}