/*
Q.Print numbers from 1 to N, but:
    If the number is Armstrong → print "Arm"
    Else if the number is multiple of 7 → print "Seven"
    Else → print the number
*/

#include <stdio.h>

int main(){
    int range;

    printf("Enter your range:");
    scanf("%d",&range);

    for(int i=1;i<=range;i++){
        int remender,n=0,result=0;
        int temp=i;
        while(temp!=0){
            temp/=10;
            ++n;
        }
        temp=i;
        while(temp!=0){
            remender=temp%10;
            int power=1;
            for(int j=0;j<n;j++){
                power*=remender;
            }
            result+=power;
            temp/=10;
        }
        if(result==i){
            printf("Arm\n");
        }else if(i%7==0){
            printf("Seven\n");
        }else{
            printf("%d\n",i);
        }
    }
    return 0;
}