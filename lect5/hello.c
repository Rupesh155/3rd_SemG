
#include <stdio.h>

int main(){
    // printf("hello");
    // printf("hello");
    // printf("hello");
    // printf("hello");
    // for(int i =0;i<=5;i++){
    //     // printf("hello\n");
    //     printf("%d\n",i);
    // }
    // for(int i =10;i>0;i--){
    //     // printf("%d\n",i);
    //     if(i%2==1){
    //          printf("%d\n",i);
    //     }
    // }
    //  int sum=0;
    // for(int i =1;i<=5;i++){
    //     sum=sum+i;
    //     // sum+=i;

      
    // }
    //   printf("%d\n",sum);

    // int i=0;
    // while (i<4)
    // {
    //     printf("%d",i);
    //     i++;
    //     /* code */
    // }
    int num=123;
    int sum=0;
    while (num>0)
    {
       int lastDigit=num%10;
       sum=sum+lastDigit;
       num=num/10;
    }
    printf("%d",sum);
    
    

}