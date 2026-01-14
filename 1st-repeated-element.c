//Q.Find the first repeating element in the array.

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

    int found = 0;
    int value = 0;

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] == arr[j]){
                value = arr[i];
                found = 1;
                break;
            }
        }
        if(found) break;
    }

    if(found){
        printf("First repeating element: %d\n", value);
    } else {
        printf("All elements are unique.\n");
    }

    return 0;
}
