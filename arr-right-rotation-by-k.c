//Q. Rotate the array to the RIGHT by k position.



#include <stdio.h>

int main() {
    int n;
    int arr[100];
    int k;

    printf("Enter the number of elements you want to enter: ");
    scanf("%d", &n);

    printf("Enter the value of k:");
    scanf("%d",&k);

    for(int i = 0; i < n; i++){
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    k=k%n;

    while(k!=0){
    int last_element=arr[n-1];
    
    for(int i=(n-1); i>0; i--){
        arr[i]=arr[i-1];
    }
    arr[0]=last_element;
    k--;
    }
    for(int i = 0; i < n; i++){
        printf("%d", arr[i] );
    }

    return 0;
}

