// Q. Find the longest contiguiguous subarray with equal number of 0's and 1's.


#include <stdio.h>

int main(){
    int arr[100], n;

    printf("Enter the length of the array: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int max_len = 0;
    
    for(int i = 0; i < n; i++){
        int zeros_count=0;
        int ones_count=0;
        for(int j = i; j < n; j++){
            if(arr[j]==0){
                zeros_count++;
            }else if(arr[j]==1){
                ones_count++;
            }
            if(zeros_count == ones_count){
                int length=j-i+1;
                if(length> max_len){
                    max_len = length;
                }
            }

        }
    }

    printf("longest = %d\n", max_len);
    return 0;
}
