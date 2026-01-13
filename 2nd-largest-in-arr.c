//Q.Count even and odd elements in an array


#include <stdio.h>

int main() {
    int n;
    int arr[100];

    printf("Enter the number of element you want to enter:");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("Enter your element no %d:",i+1);
        scanf("%d",&arr[i]);
    }
   int largest, sec_largest;

    if (arr[0] > arr[1]) {
        largest = arr[0];
        sec_largest = arr[1];
    } else {
        largest = arr[1];
        sec_largest = arr[0];
    }

    for (int i = 2; i < n; i++) {
        if (arr[i] > largest) {
            sec_largest = largest;
            largest = arr[i];
        }
        else if (arr[i] > sec_largest && arr[i] != largest) {
            sec_largest = arr[i];
        }
    }


    

    printf("Largest = %d \n",largest);
    printf("Second Largest = %d \n",sec_largest);

    return 0;
}
