//Q.Count how many even and odd elements are present in the array.


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
    int even=0;
    int odd=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even++;
        }else{
            odd++;
        }
    }
    printf("Even = %d\n",even);
    printf("Odd = %d \n",odd);
    return 0;
}
