#include <Stdio.h>

int main(){
    int range;
    printf("Enter your range:");
    scanf("%d",&range);

    for(int i=1;i<=range;i++){
        if(i%4==0 && i%6==0){
            printf("FourSix\n");
        }else if(i%4==0){
            continue;
        }else if(i%6==0){
            printf("Six\n");
        }else{
            printf("%d\n",i);
        }
    }
    return 0;
}