//Check whether the array contains any duplicate elements.

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

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] == arr[j]){
                found = 1;
                break;
            }
        }
        if(found) break;
    }

    if(found){
        printf("Duplicate Found.\n");
    } else {
        printf("All elements are unique.\n");
    }

    return 0;
}
