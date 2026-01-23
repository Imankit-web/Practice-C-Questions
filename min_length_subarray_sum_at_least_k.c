//Q. Find the MINIMUM length of a contiguous subarray whose sum is ≥ K.

#include <stdio.h>

int main(){
    int arr[100], n, k;

    printf("Enter the length of the array: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter the value of K: ");
    scanf("%d", &k);

    int min_len = n + 1;

    for(int i = 0; i < n; i++){
        int sum = 0;

        for(int j = i; j < n; j++){
            sum += arr[j];

            if(sum >= k){
                int length = j - i + 1;

                if(length < min_len){
                    min_len = length;
                }
                break;   
            }
        }
    }

    if(min_len == n + 1){
        printf("0\n");
    } else {
        printf("%d\n", min_len);
    }

    return 0;
}
