//Q. Find the first subarray with sum exactly equal to K.

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

    int start_index=-1;
    int end_index=-1;

    for(int i =0; i<n ; i++){
        int sum=0;
        for(int j=i; j<n; j++){
            sum+=arr[j];
            if(sum==k){
                start_index=i;
                end_index=j;
                
            }
        }
    }
    printf("Start = %d \n End = %d \n", start_index, end_index);



    return 0;
}