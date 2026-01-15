//Q.Check whether the array is a palindrome.


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
    int pal = 1;   

    while(left < right){
        if(arr[left] != arr[right]){
            pal = 0;
            break;
        }
        left++;
        right--;
    }

    if(pal){
        printf("Pallindrome.\n");
    }else{
        printf("Not a palindrome.\n");
    }

    return 0;
}


