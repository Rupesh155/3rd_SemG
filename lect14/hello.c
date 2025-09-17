// i66

// [1,2,3,45,6,89,-6]
// k=4

#include <stdio.h>
#include <limits.h>

int maxArraySum(int arr[] ,int n,int k){
    int wSum=0;
    //   int arr[7]={-1,2,4,5,4,3,7};
    for( int i=0;i<k;i++){
        wSum= wSum+arr[i];
    }
    int maxSum=wSum;
    for( int j=k;j<n;j++){
        wSum=wSum+arr[j]-arr[j-k];
        if(wSum>maxSum){
            maxSum=wSum;
        }
    }
    return maxSum;

    // int maxSum=INT_MIN;
    //     // int arr[7]={-1,2,4,5,-4,3,-7};
    // for(int i=0;i<=n-k;i++){
    //     int currSum=0;
    //     for(int j=i;j<i+k;j++){
    //         currSum=currSum+arr[j];

    //     }
    //     if(currSum>maxSum){
    //         maxSum=currSum;
    //     }
    // }
    // return maxSum;


}
int main(){
    int arr[7]={-1,2,4,5,4,3,7};
    int k=3;
     int n=    sizeof(arr)/sizeof(arr[0]);
  int data=     maxArraySum(arr,n,k);
  printf("%d",data);



}


    // int arr[7]={1,2,4,5,4,3,7};
    // int k=3
