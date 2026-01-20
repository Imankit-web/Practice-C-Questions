//Q. Find the second smallest element in an array.


#include <stdio.h>

int main() {
    int arr[100],n;

    printf("Enter the number of element you want to enter:");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("Enter your element no %d:",i+1);
        scanf("%d",&arr[i]);
    }
   int smallest, sec_smallest;

    if (arr[0] < arr[1]) {
        smallest = arr[0];
        sec_smallest = arr[1];
    } else {
        smallest = arr[1];
        sec_smallest = arr[0];
    }

    for (int i = 2; i < n; i++) {
        if (arr[i] < smallest) {
            sec_smallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] < sec_smallest && arr[i] != smallest) {
            sec_smallest = arr[i];
        }
    }


    

    printf("Smallest = %d \n",smallest);
    printf("Second Smallest = %d \n",sec_smallest);

    return 0;
}
