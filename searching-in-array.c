//Q.Check whether an element is present in the array.


#include <stdio.h>

int main() {
    int n;
    int arr[100];
    int element;

    printf("Enter the number of element you want to enter:");
    scanf("%d",&n);

    printf("Enter the element you want to check:");
    scanf("%d",&element);

    for(int i=0;i<n;i++){
        printf("Enter your element no %d:",i+1);
        scanf("%d",&arr[i]);
    }
    
    int found=0;

    for(int i=0;i<n;i++){
        if(arr[i]==element){
            found=1;
            break;
        }
    }

    if(found){
        printf("Found\n");
    }else{
        printf("Not Found\n");
    }


    return 0;
}
