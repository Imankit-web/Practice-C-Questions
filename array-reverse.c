// Q.Read N numbers into an array and print them in reverse order.
#include <stdio.h>

int main() {
    int n;
    int arr[100];

    printf("Enter the number of element you want to enter:");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("Enter your element no %d:",i);
        scanf("%d",&arr[i]);
    }

    for(int i=(n-1);i>=0;i--){
        printf("%d",arr[i]);
    }
    

    return 0;
}
