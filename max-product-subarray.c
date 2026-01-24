//Q. Find the maximun product fa a contiguous subarray.


#include <stdio.h>

int main(){
    int arr[100], n;

    printf("Enter the length of the array: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    

    int max_product = arr[0];

    for(int i = 0; i < n; i++){
        int product = 1;

        for(int j = i; j < n; j++){
            product*=arr[j];
            if(product > max_product){
                max_product = product;
            }
        }
    }

    printf("%d",max_product);


    return 0;
}
