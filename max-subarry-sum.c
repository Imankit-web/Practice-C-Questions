//Q. Find the maximum sum of a contiguous subarray (Known as Kadane's Algorithm).

#include <stdio.h>

int main(){
    int n,arr[100];

    printf("Enter thr no of elements your want to enter:");
    scanf("%d",&n);

    for(int i=0;i<n; i++){
        printf("Enter the element no %d:",i+1);
        scanf("%d",&arr[i]);
    }

    int current_sum=arr[0];
    int max_sum=arr[0];
    
    for(int i=1; i<n; i++){
        if(current_sum<0){
            current_sum=arr[i];
        }else{
            current_sum+=arr[i];
        }
        
        if(current_sum>max_sum){
            max_sum=current_sum;
        }
    }

    printf("%d",max_sum);

    return 0;
}