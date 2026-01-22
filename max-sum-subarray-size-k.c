//Q. Find the maximum sum of any contiguous subarray of size k.


#include <stdio.h>


int main(){
    int arr[100], n, k;

    printf("Enter the length of the array: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Enter the value of K:");
    scanf("%d",&k);

    int max_sum=0;
    
    for(int i = 0; i <= n-k; i++){
        int sum=0;
        for(int j = i; j < i+k; j++){
            sum +=arr[j];
            
            
            
        }
        if( sum > max_sum){
            max_sum=sum;
        }
    }

    printf("%d\n", max_sum);
    return 0;
}