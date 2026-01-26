/*Q. Find the Equilibrium index of an array.
-An Equilibrium index is an index such that:
sum of element to the left of i = sum of elements to the right of i 

*/


#include <stdio.h>

int main(){
    int arr[100], n;

    printf("Enter the length of the array: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int index=-1;
    
    for(int i =1 ;i<n ; i++){
        int left_sum=0;
        int right_sum=0;

        for(int j =0; j <i; j++){
            left_sum+=arr[j];
        }
        for(int k = i+1; k <n;k++){
            right_sum+=arr[k];
        }

        if(left_sum == right_sum){
            index=i;
            break;
        }  
            
    }
    if(index!=-1){
        printf("Equilibrium index = %d.\n",index);

    }else{
        printf("NO Equilibrium index found.\n");
    }
    return 0;
}

