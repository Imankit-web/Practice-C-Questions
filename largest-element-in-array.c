//Q.Find the largest element in an array

#include <stdio.h>

int main() {
    int n;
    int arr[100];

    printf("Enter the number of element you want to enter:");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("Enter your element no %d:",i+1);
        scanf("%d",&arr[i]);
    }
    
    int largest=arr[0];
    
    for(int i=1;i<n;i++){
        if(largest<arr[i]){
            largest=arr[i];
        }
        
    }
    printf("%d",largest);

    return 0;
}
