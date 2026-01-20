//Q.Find the sum of the elements between two given indices.

#include <stdio.h>

int main(){
    int arr[100],n,l,r;

    printf("Enter the length of the array: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Enter the left value:");
    scanf("%d",&l);

    printf("Enter the right value:");
    scanf("%d",&r);

    int sum=0;

    for(int i=l; i<=r;i++){
        sum+=arr[i];
    }

    printf("%d",sum);


    return 0;


}