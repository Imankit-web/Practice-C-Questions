//Q. Find the longest subarray whose sum is dividible by k.


#include <stdio.h>

int main(){
    int arr[100], n,k;

    printf("Enter the length of the array: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter the value of k:");
    scanf("%d",&k);

    int max_len = 0;
    
    for(int i = 0; i < n; i++){
        int sum=0;
        for(int j = i; j < n; j++){
            int length = j - i + 1;
            sum +=arr[j];
            
            if(sum % k == 0){
                if(max_len < length){
                    max_len = length;
                }
            }
        }
    }

    printf("longest length = %d\n", max_len);
    return 0;
}
