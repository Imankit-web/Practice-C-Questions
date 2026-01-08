/*

Q.Print numbers from 1 to N, but:
    If the number is perfect square → print "Square"
    Else if the number is even → print "Even"
    Else → print the number
*/

#include <stdio.h>

int main(){
    int range;

    printf("Entre your range:");
    scanf("%d",&range);

    for(int i=1;i<=range;i++){
        int flag=0;
        for(int j = 1; j*j <= i; j++){
            if(j*j==i){
                flag=1;
                break;
            }
        }

        if(flag){
            printf("%d -> Square\n",i);
        }else if(i%2==0){
            printf("%d -> Even\n",i);
        }else{
            printf("%d\n",i);
        }
    }
    return 0;
}