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
        int sum = 0;   // reset for each starting index

        for(int j = i; j < n; j++){
            sum += arr[j];

            if(sum == 0){
                int length = j - i + 1;
                if(length > max_len){
                    max_len = length;
                }
            }
        }
    }

    printf("Longest zero-sum subarray length = %d\n", max_len);
    return 0;
}
