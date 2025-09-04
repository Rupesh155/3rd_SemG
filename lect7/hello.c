#include <stdio.h>
int main(){
    int n=11;
    int isPrime=1;
    if(n<=1){
        printf("prime no nhi hai");
        return 0;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            isPrime=0;
            break;
        }
    }
    if(isPrime){
        printf("prime no haiii");

    }else
    {
        printf("prime no nhii hai");
    }
    


    // for(int i =0;i<5;i++){
    //     if(i==3){
    //         // break;
    //         continue;
    //     }
    //     printf("%d",i);
    // }
}