/*
Q.Print numbers from 1 to n,but:
if the number is both prime ans palindrome print "PrimePal"
else if the number is prime-print-> "prime"
else if the number is palindrome -> print "pal"
else print the number.
*/

#include <stdio.h>

int main(){
    int range;
    printf("Enter your range:");
    scanf("%d",&range);

    for(int i=1;i<=range;i++){
        
        //check palindrome.

        int rev=0;
        int temp=i;
        while(temp!=0){
            rev=rev*10+(temp%10);
            temp/=10;
        }
        int ispal=(rev==i);

        // Check prime number.
        int isprime = 1;

        if(i<=1){
            isprime=0;
        }else{
            for(int j=2;j*j<=i;j++){
                if(i%j==0){
                    isprime=0;
                    break;
                }
            }
        }


        if(isprime && ispal){
            printf("PrimePal-> %d\n",i);
        }else if(isprime){
            printf("Prime -> %d\n",i);
        }else if(ispal){
            printf("pal -> %d\n",i);
        }else{
            printf("%d\n",i);
        }

    }
    return 0;
}