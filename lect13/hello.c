#include <stdio.h>
int main(){
    int arr[5]={-10,20,30,-40,50};
    int f=arr[0];
    for(int i =0;i<5;i++){
        arr[i]=arr[i+1];
    }
    arr[4]=f;


    // int check=1;
    // for(int i =0;i<5/2;i++){
    //     if(arr[i]!=arr[5-1-i]){
    //         check=0;
    //         break;
    //     }
    // }
    // if(check==1){
    //     printf("haiiii");

    // }else 
    // {
    //      printf("aisa kuch bhi nhi hai ");
    // }
    


    // int k=7;
    // for(int i=0;i<7;i++){
    //     for(int j=i+1;j<7;j++){
    //         if(arr[i]+ arr[j]==k){
    //             printf("%d %d",i,j);
    //             break;
    //         }
    //     }
    // }



}


