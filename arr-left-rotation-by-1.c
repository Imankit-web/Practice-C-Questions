//Q.Rotate the array to the left by 1 position.

#include <stdio.h>

int main() {
    int n;
    int arr[100];

    printf("Enter the number of elements you want to enter: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int last_element=arr[0];
    
    for(int i=0; i<n-1; i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=last_element;
    for(int i = 0; i < n; i++){
        printf("%d", arr[i] );
    }

    return 0;
}
