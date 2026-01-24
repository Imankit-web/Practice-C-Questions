//Q. Find the length of the longest strictly increasing contiguous subarray.


#include <stdio.h>

int main(){
    int arr[100], n;

    printf("Enter the length of the array: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    int current_len=1;
    int max_len=1;

    for(int i = 1; i < n; i++){
        if(arr[i] > arr[i-1]){
            current_len++;
        }else{
            current_len=1;
        }
        if(current_len > max_len){
            max_len = current_len;
        }
    }
    printf("%d",max_len);


   
    return 0;
}
