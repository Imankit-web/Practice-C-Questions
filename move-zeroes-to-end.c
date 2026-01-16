//Q.Move all zero element to the end of the array, maintain the relative order of non-zero element.

#include <stdio.h>

int main(){
    int arr[100];
    int n;
    
    printf("Enter the number of element you want to enter:");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("Enter your element no %d:",i+1);
        scanf("%d",&arr[i]);
    }
    int pos=0;

    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            arr[pos]=arr[i];
            pos++;
        }
    }

    while(pos<n){
        arr[pos]=0;
        pos++;
    }

    for(int i = 0; i < n; i++){
        printf("%d", arr[i] );
    }

    return 0;
}