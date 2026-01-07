#include <stdio.h>

int main(){
    int range;
    printf("Enter your range:");
    scanf("%d",&range);

    for(int i=0;i<=range;i++){
        int temp = i;
        int rev = 0; 
        int digit;
        while (temp > 0) {
            digit = temp % 10;
            rev = rev * 10 + digit;
            temp = temp / 10;
        }
    if(rev==i){
        printf("Pal\n");
    }else{
        printf("%d\n",i);
    }
}
    return 0;
}