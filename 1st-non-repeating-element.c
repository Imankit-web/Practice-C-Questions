//Q.Find the first non-repeating element in the array

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
        int count = 0;

        for(int j = 0; j < n; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }

        if(count == 1){
            value = arr[i];
            found = 1;
            break;
        }
    }

    if(found){
        printf("First non-repeating element: %d\n", value);
    } else {
        printf("All elements are repeating.\n");
    }

    return 0;
}
