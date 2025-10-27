#include <stdio.h>
int main(){

 
 int arr[6]={7,1,5,3,6,4};
 int minPrize=arr[0];
 int maxP=0;
 for(int i =1;i<6;i++){
    if(arr[i]<minPrize){
        minPrize=arr[i];

    }else 
    {
       int profit=arr[i]-minPrize;
       if(profit>maxP){
        maxP=profit;
       }
    }
    

 }

 printf("%d",maxP);
}