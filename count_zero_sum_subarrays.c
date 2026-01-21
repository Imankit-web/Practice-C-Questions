//Q. Count the number of subarrays with sum = 0.

#include <stdio.h>

int main(){
    int arr[100], n;

    printf("Enter the length of the array: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int count=0;

    for(int i = 0; i < n; i++){
        int sum=0;
        for(int j = i; j < n; j++){
            sum+=arr[j];
            if(sum==0){
                count++;
            }
            
        }
    }
    printf("%d\n",count);

    return 0;
}
