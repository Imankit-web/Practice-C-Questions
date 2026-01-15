//Q.Reversing the array using swapping (in place).

#include <stdio.h>

int main() {
    int n;
    int arr[100];

    printf("Enter the number of elements you want to enter: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int left = 0;
    int right = n - 1;
    int temp;

    while(left < right){
        temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;

        left++;
        right--;
    }

    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}


