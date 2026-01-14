//Q.Count how many times a given element appears in the array.


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
    
    int count=0;

    for(int i=0;i<n;i++){
        if(arr[i]==element){
            count++;
            
        }
    }

    printf("Frequency of %d is %d.\n",element,count);


    return 0;
}
